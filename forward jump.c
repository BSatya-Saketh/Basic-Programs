// # Forward jump
#include<stdio.h>
int main()
{
	int n;
	printf("Number: ");
	scanf("%d",&n);
	if(n%2==0)
	goto even;
	else
	goto odd;
	even:
		printf("Given number is even\n");
		goto last;
	odd:
		printf("Given number is odd\n");
		goto last;
	last:
		printf("**THE END**");
}
