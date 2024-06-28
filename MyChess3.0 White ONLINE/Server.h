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
	SOCKET sListen;

public: 
	SOCKET newConnection;

	Server(System::String ^ ServerIp, int ServerPort)
{
	Ip = ServerIp;
	Port = ServerPort;
	sListen = INVALID_SOCKET;
	newConnection = INVALID_SOCKET;
}

public:
	bool ServerStart()
	{
		System::String^ ip = Ip;
		std::string unmanagedString = msclr::interop::marshal_as<std::string>(ip);
		const char* ServerIp = unmanagedString.c_str();

		WSAData wsaData;
		WORD DLLVersion = MAKEWORD(2, 1);
		if (WSAStartup(DLLVersion, &wsaData) != 0)
		{
			return false;
		}

		SOCKADDR_IN addr;
		int sizeofaddr = sizeof(addr);
		addr.sin_addr.s_addr = inet_addr(ServerIp);
		addr.sin_port = htons(Port);
		addr.sin_family = AF_INET;

		sListen = socket(AF_INET, SOCK_STREAM, NULL);
		bind(sListen, (SOCKADDR*)&addr, sizeof(addr));
		listen(sListen, SOMAXCONN);

		SOCKADDR_IN clientAddr;
		int clientAddrSize = sizeof(clientAddr);
		newConnection = 0;
		newConnection = accept(sListen, (SOCKADDR*)&clientAddr, &clientAddrSize);

		if (newConnection == 0) {
			System::Windows::Forms::MessageBox::Show("Client connection failed", "Error", System::Windows::Forms::MessageBoxButtons::OK, System::Windows::Forms::MessageBoxIcon::Error);
			return false;
		}
		else {
			System::Windows::Forms::MessageBox::Show("Second player connected", "Success", System::Windows::Forms::MessageBoxButtons::OK, System::Windows::Forms::MessageBoxIcon::Information);
			return true;
		}
	}

protected:
	~Server() {
		if (sListen != INVALID_SOCKET) {
			closesocket(sListen);
		}
		if (newConnection != INVALID_SOCKET) {
			closesocket(newConnection);
		}
		WSACleanup();
	}
};