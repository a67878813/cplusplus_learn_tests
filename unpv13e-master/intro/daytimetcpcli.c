// #include	"unp.h"
#ifdef __cplusplus
extern "C"{
#endif

#include	"../lib/unp.h"

#ifdef __cplusplus
}
#endif
// #include "../lib/error.c"
// int
// Socket(int family, int type, int protocol)
// {
// 	int n;
// 	if(( n = socket(family, type, protocol)) <0)
// 		err_sys("socket error");
// 	return (n);
// }

int
main(int argc, char **argv)
{
	int					sockfd, n;
	char				recvline[MAXLINE + 1];
	//ipv4
	struct sockaddr_in	servaddr;
	//ipv6
	// struct sockaddr_in6	servaddr;


	if (argc != 2)
		err_quit("usage: a.out <IPaddress>");


						//socket ( ip protocol family, )
	if ( (sockfd = socket(AF_INET, SOCK_STREAM, 0)) < 0)
	// if ( (sockfd = socket(9999, SOCK_STREAM, 0)) < 0)
	//ipv6
	// if ( (sockfd = socket(AF_INET6, SOCK_STREAM, 0)) < 0)
		err_sys("socket error");
	// sockfd = Socket(AF_INET6, SOCK_STREAM, 0);

	bzero(&servaddr, sizeof(servaddr));//set bytes to 0
	servaddr.sin_family = AF_INET;
	// servaddr.sin6_family = AF_INET6;
	servaddr.sin_port   = htons(9999);//to bits type	/* daytime server */
	// servaddr.sin6_port   = htons(13);//to bits type	/* daytime server */
	// i means Interface
	// inet_pton  // Presentation to bitNumber 
	if (inet_pton(AF_INET, argv[1], &servaddr.sin_addr) <= 0)
	//                     argv[1] 192.168.2.2
	// if (inet_pton(AF_INET6, argv[1], &servaddr.sin6_addr) <= 0)

		err_quit("inet_pton error for %s", argv[1]);

	//connect (sock_File_Descriptor   ,socketADDR_Pointer ,size of *ocketADDR)
	if (connect(sockfd, (SA *) &servaddr, sizeof(servaddr)) < 0)
		err_sys("connect error");

    unsigned int te_counter = 0;
	while ( (n = read(sockfd, recvline, MAXLINE)) > 0) {
		te_counter +=1;
		recvline[n] = 0;	/* null terminate */
		if (fputs(recvline, stdout) == EOF)
			err_sys("fputs error");
	}
	if (n < 0)
		err_sys("read error");

	printf("te_counter is %d\n",te_counter);
	exit(0);
}


