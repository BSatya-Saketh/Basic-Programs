#include<stdio.h>
int main()
{
	void add();
	add();
}
void add()
{
	int i,j;
	printf("Values of i & j: ");
	scanf("%d%d",&i,&j);
	printf("Sum of them: %d",i+j);
}
