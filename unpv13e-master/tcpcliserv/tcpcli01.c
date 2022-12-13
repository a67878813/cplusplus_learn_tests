#ifdef __cplusplus
extern "C"{
#endif

#include	"../lib/unp.h"

#ifdef __cplusplus
}
#endif

int
main(int argc, char **argv)
{
	int					sockfd;
	struct sockaddr_in	servaddr;
	printf("argc = %i\n",argc);
	if (argc != 2)
		err_quit("usage: tcpcli <IPaddress>");

	sockfd = Socket(AF_INET, SOCK_STREAM, 0);

	bzero(&servaddr, sizeof(servaddr));
	servaddr.sin_family = AF_INET;
	servaddr.sin_port = htons(SERV_PORT);
	Inet_pton(AF_INET, argv[1], &servaddr.sin_addr);

	Connect(sockfd, (SA *) &servaddr, sizeof(servaddr));

	str_cli(stdin, sockfd);		/* do it all */
	//read from stdin , -->write to server, --> readline from server, --> send to stdout

	exit(0);
}
