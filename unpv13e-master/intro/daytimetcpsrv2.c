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
	int					listenfd, connfd, i;
	struct sockaddr_in	servaddr;
	char				buff[MAXLINE];
	time_t				ticks;

	listenfd = Socket(AF_INET, SOCK_STREAM, 0);

	bzero(&servaddr, sizeof(servaddr));
	servaddr.sin_family      = AF_INET;
	servaddr.sin_addr.s_addr = htonl(INADDR_ANY);
	servaddr.sin_port        = htons(9999);

	Bind(listenfd, (SA *) &servaddr, sizeof(servaddr));

	Listen(listenfd, LISTENQ);

	for ( ; ; ) {
		connfd = Accept(listenfd, (SA *) NULL, NULL);

        ticks = time(NULL);
        snprintf(buff, sizeof(buff), "%.24s\r\n", ctime(&ticks));
		for (i = 0; i < strlen(buff); i++)
        	Write(connfd, &buff[i], 1);

		Close(connfd);
	}
}
