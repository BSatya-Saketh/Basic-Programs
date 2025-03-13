// # Calculate total, avg, result, and grade of the student
#include<stdio.h>
int main()
{
	int tot=0,avg=0,m,p,c;
	char res[10],grade[20];
	printf("M,P,C marks: \n");
	scanf("%d%d%d",&m,&p,&c);
	tot=m+p+c;
	avg=tot/3;
	if(m>=35 && p>=35 && c>=35)
	strcpy(res,"Pass");
	else
	strcpy(res,"Fail");
	if(strcmp(res,"Pass")==0)
	{
		if(avg>=75)
		strcpy(grade,"Distinction");
		else if(avg>=60 && avg<75)
		strcpy(grade,"First class");
		else if(avg>=45 && avg<75)
		strcpy(grade,"Second class");
		else
		strcpy(grade,"Third class");
	}
	else
	strcpy(grade,"No Grade");
	printf("	*****************************\n");
	printf("		student report\n");
	printf("	*****************************\n\n");
	printf("Maths = %d\n",m);
	printf("Physics = %d\n",p);
	printf("Chemistry = %d\n",c);
	printf("Total = %d\n",tot);
	printf("Average = %d\n",avg);
	printf("Resulty = %s\n",res);
	printf("Grade = %s\n\n",grade);
	printf("	*****************************");
}
