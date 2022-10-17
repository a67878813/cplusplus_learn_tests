#include <stdio.h>

int main(int argc, char** argv)
{
	int d = 2;
	printf("welcom to a program with a bug!\n");
	scanf("%d",d);
	printf("you gave me: %d",d);
	return 0;
}
