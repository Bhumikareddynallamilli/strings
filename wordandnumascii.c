#include<stdio.h>
void main()
{
	char str[1000];
	scanf("%s",str);
	int i;
	for(i=0; i<strlen(str);i++)
	{
		printf("%c-->%d\n",str[i],str[i]);
	}
}
