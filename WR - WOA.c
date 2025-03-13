#include<stdio.h>
int main()
{
	int add();
	printf("Sum: %d",add());
}
int add()
{
	int i,j;
	printf("Values of i & j: ");
	scanf("%d%d",&i,&j);
	return i+j;
}
