#include<stdio.h>
int main()
{
	int n,i,j,sum=0,rem=0,temp=0;
	printf("Enter Range: ");
	scanf("%d",&n);
	system("cls");
	printf("Armstrong numbers in the given range are : \n");
	for(i=1;i<=n;i++)
	{
		temp=i;
		sum=0;
		for(j=0;i>0;j++)
		{
			rem=i%10;
			sum+=rem*rem*rem;
			i=i/10;
		}
		i=temp;
		if(sum==temp)
		printf("%d ",i);
	}
}
