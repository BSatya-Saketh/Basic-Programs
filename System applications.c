// WAP to open system applicants
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int ch;
	printf("1) Notepad\n");
	printf("2) Paint\n");
	printf("3) Calculator\n");
	printf("Enter ur choice (1/2/3)\n");
	scanf("%d",&ch);
	switch(ch)
	{
		case '1':
			syetem("Notepad.exe");
			break;
		case '2':
			system("mspaint.exe");
			break;
		case '3':
			system("Calculator.exe");
		default:
			system("Notepad.exe");
	}
}
