#include<stdio.h>
void main()
{
	char ch;
	printf("enter the alphabet");
	scanf("%c",&ch);
	if(ch>='a' && ch<='z')
	{
		printf("lower case",ch);
	}
	else if(ch>='A' && ch<='Z')
	{
		printf("upper case",ch);
	}
}
