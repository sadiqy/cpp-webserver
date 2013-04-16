/**
 * clientsocket.h
 */
#ifndef CLIENT_SOCKET_H
#define CLIENT_SOCKET_H 

#include <winsock2.h>
#include <string>
#include "../http/response.h"

namespace net
{
	class clientsocket
	{
		private:
			int socket;
			struct sockaddr_in address;
			
		public:
			clientsocket(int,struct sockaddr_in);
			~clientsocket();
			
			std::string recieve();
			int send(http::response*);
			int send (std::string);
			int send(const char*,int,int);
			void close();
	};
};

#endif
