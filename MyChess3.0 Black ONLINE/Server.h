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
    bool wsaInitialized;

public: 
	SOCKET newConnection;

	Server(System::String ^ ServerIp, int ServerPort)
{
	Ip = ServerIp;
	Port = ServerPort;
	newConnection = INVALID_SOCKET;
    wsaInitialized = false;
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
            std::cerr << "Library initialization error: " << WSAGetLastError() << std::endl;
            return false;
        }
        wsaInitialized = true;

        SOCKADDR_IN addr;
        int sizeofaddr = sizeof(addr);
        addr.sin_addr.s_addr = inet_addr(ServerIp);
        addr.sin_port = htons(Port);
        addr.sin_family = AF_INET;

        newConnection = socket(AF_INET, SOCK_STREAM, NULL);
        if (newConnection == INVALID_SOCKET) {
            std::cerr << "Socket creation error: " << WSAGetLastError() << std::endl;
            Cleanup();
            return false;
        }

        if (connect(newConnection, (SOCKADDR*)&addr, sizeof(addr)) != 0) {
            std::cerr << "Connection error: " << WSAGetLastError() << std::endl;
            Cleanup();
            return false;
        }

        System::Windows::Forms::MessageBox::Show("Connected to the game", "Success", System::Windows::Forms::MessageBoxButtons::OK, System::Windows::Forms::MessageBoxIcon::Information);
        return true;
	}

private:
    void Cleanup() {
        if (newConnection != INVALID_SOCKET) {
            closesocket(newConnection);
            newConnection = INVALID_SOCKET;
        }
        if (wsaInitialized) {
            WSACleanup();
            wsaInitialized = false;
        }
    }

protected:
	~Server() {
		if (newConnection != INVALID_SOCKET) {
			closesocket(newConnection);
		}
		WSACleanup();
	}
};