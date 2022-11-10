// #include	"unp.h"

#ifdef __cplusplus
// namespace ex{
extern "C"{
#endif

#include	"../lib/unp.h"

#ifdef __cplusplus
}
#endif
// #include "../lib/error.c"

#include <string.h>



int
main(int argc, char **argv)
{
	int					listenfd, connfd;
	struct sockaddr_in	servaddr;
	char				buff[MAXLINE];
	time_t				ticks;

	//create a new socket
	listenfd = Socket(AF_INET, SOCK_STREAM, 0);

	//initialize a serveraddr
	bzero(&servaddr, sizeof(servaddr));
	servaddr.sin_family      = AF_INET;
	servaddr.sin_addr.s_addr = htonl(INADDR_ANY);//hex to number ? 0.0.0.0?
	servaddr.sin_port        = htons(9999);	/* daytime server */

	//bidn this socket to the serveraddr
	Bind(listenfd, (SA *) &servaddr, sizeof(servaddr));

	Listen(listenfd, LISTENQ);
	//max queue is 1024, after that will return refused to cli.

	// infinity loop
	/* 
	
	*/
	for ( ; ; ) {
		// accept will sleep this thread, until core to respont.
		// after TCp 's three way handshake, it returns a 
			//Connected Descriptor, which could be using to communicate.
		connfd = Accept(listenfd, (SA *) NULL, NULL);

        ticks = time(NULL);
        snprintf(buff, sizeof(buff), "%.24s\r\n", ctime(&ticks));
		//format str, copy to buff
        // Write(connfd, buff, strlen(buff));
		// raw func
		// if (write(connfd , buff, strlen(buff)) != strlen(buff))
			// err_sys("write error");

		printf("strlen buff = %d\n",strlen(buff));

		// printf("strlen temp = %d\n",strlen(temp));
		for ( size_t j = 0; j<strlen(buff);++j)
		{
			// temp[0] = buff[0];
			write(connfd,&buff[j],1);	
			printf(".");
		}
		printf("\n");

		Close(connfd);
	}
}


// #ifdef __cplusplus
// }
// #endif