#include<stdio.h>
int main()
{
	int add(int,int);
	int i,j;
	scanf("%d%d",&i,&j);
	printf("The sum of i & j is: %d",add(i,j));
}
int add(int c,int d)
{
	return c+d;
}
