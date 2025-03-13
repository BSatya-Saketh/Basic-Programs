#include<stdio.h>
#include<string.h>
int main()
{
	int i,j,n;
	char city[100][100],temp[100];
	printf("Number of cities: ");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	scanf("%s",&city[i]);
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			if(strcmp((city[i],city[j])>0))
			{
				strcpy(temp,city[i]);
				stcpy(city[i],city[j]);
				strcpy(city[j],temp);
			}
		}
	}
	printf("The sorted city names are: \n");
	for(i=0;i<n;i++)
	printf("%s\n",city[i]);
}
