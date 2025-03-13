#include<stdio.h>
int main()
{
	int add(int,int);
	int i,j;
	printf("Values of i & j: ");
	scanf("%d%d",&i,&j);
	add(i,j);
}
int add(int a,int b)
{
	printf("Sum: %d",a+b);
}
