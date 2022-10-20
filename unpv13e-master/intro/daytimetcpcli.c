// #include	"unp.h"
#ifdef __cplusplus
extern "C"{
#endif

#include	"../lib/unp.h"

#ifdef __cplusplus
}
#endif
// #include "../lib/error.c"

int
main(int argc, char **argv)
{
	int					sockfd, n;
	char				recvline[MAXLINE + 1];
	struct sockaddr_in	servaddr;

	if (argc != 2)
		err_quit("usage: a.out <IPaddress>");

	if ( (sockfd = socket(AF_INET, SOCK_STREAM, 0)) < 0)
		err_sys("socket error");

	bzero(&servaddr, sizeof(servaddr));//set bytes to 0
	servaddr.sin_family = AF_INET;
	servaddr.sin_port   = htons(13);//to bits type	/* daytime server */
	// i means Interface
	// inet_pton  // Presentation to bitNumber 
	if (inet_pton(AF_INET, argv[1], &servaddr.sin_addr) <= 0)

		err_quit("inet_pton error for %s", argv[1]);

	//connect (sock_File_Descriptor   ,socketADDR_Pointer ,size of *ocketADDR)
	if (connect(sockfd, (SA *) &servaddr, sizeof(servaddr)) < 0)
		err_sys("connect error");

    
	while ( (n = read(sockfd, recvline, MAXLINE)) > 0) {
		recvline[n] = 0;	/* null terminate */
		if (fputs(recvline, stdout) == EOF)
			err_sys("fputs error");
	}
	if (n < 0)
		err_sys("read error");

	exit(0);
}

