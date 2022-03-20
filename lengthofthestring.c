#include<stdio.h>
void main()
{
	char str[1000];
	scanf("%s",str);
	int length=0,i=0;
	while(str[i] !='\0')
	{
		length++;
		i++;
	}
	printf("length is %d:",length);
}
