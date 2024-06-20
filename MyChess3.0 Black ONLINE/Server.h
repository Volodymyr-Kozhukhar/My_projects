#include <winsock2.h>
#include <msclr/marshal_cppstd.h>
#include <ws2tcpip.h>
#include <string>
#include <cstring>
#include <iostream>
#include "MyForm.h"

#pragma comment(lib, "ws2_32.lib")
#pragma warning(disable: 4996)

ref class Server {
private: 
	System::String^ Ip;
	int Port;

public: 
	SOCKET newConnection;

	Server(System::String ^ ServerIp, int ServerPort)
{
	Ip = ServerIp;
	Port = ServerPort;
	newConnection = INVALID_SOCKET;
}

protected: 
	~Server() {
		if (newConnection != INVALID_SOCKET) {
			closesocket(newConnection);
		}
		WSACleanup();
	}

public:
	bool ServerConnect()
	{
		System::String^ ip = Ip;
		std::string unmanagedString = msclr::interop::marshal_as<std::string>(ip);
		const char* ServerIp = unmanagedString.c_str();

		WSAData wsaData;
		WORD DLLVersion = MAKEWORD(2, 1);
		if (WSAStartup(DLLVersion, &wsaData) != 0)
		{
			std::cout << "Library error";
			exit(1);
		}

		SOCKADDR_IN addr;
		int sizeofaddr = sizeof(addr);
		addr.sin_addr.s_addr = inet_addr(ServerIp);
		addr.sin_port = htons(Port);
		addr.sin_family = AF_INET;

		newConnection = 0;
		newConnection = socket(AF_INET, SOCK_STREAM, NULL);
		if (connect(newConnection, (SOCKADDR*)&addr, sizeof(addr)) != 0) {
			std::cout << "Error: failed connect to server.\n";
			return 1;
		}

		if (newConnection <= 0) {
			System::Windows::Forms::MessageBox::Show("Connection failed", "Error", System::Windows::Forms::MessageBoxButtons::OK, System::Windows::Forms::MessageBoxIcon::Error);
			return false;
		}
		else {
			System::Windows::Forms::MessageBox::Show("Connected", "Success", System::Windows::Forms::MessageBoxButtons::OK, System::Windows::Forms::MessageBoxIcon::Information);
			return true;
		}
	}
};