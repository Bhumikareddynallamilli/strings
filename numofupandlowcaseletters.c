#include<stdio.h>
void main()
{
	char str[1000];
	scanf("%s",&str);
	int i,u=0,l=0,d=0,s=0;
	for(i=0; i<strlen(str); i++)
	{
		if(str[i]>='A' && str[i]<='Z')
		{
			u++;
		}
		else if(str[i]>='a' && str[i]<='z')
		{
			l++;
		}
		else if(str[i]>='0' && str[i]<='9')
		{
			d++;
		}
		else
		{
			s++;
		}
	}
	printf("%d\n%d\n%d\n%d",u,l,d,s);
}
