#include<stdio.h>
int main()
{
	char str1[100],str2[100];
	int i,len1,len2,flag=0;
	scanf("%[^n]s",str1);
	scanf(" %[^n]s",str2);
	for(i=0;str1[i]!=0;i++)
	len1=i;
	for(i=0;str2[i]!=0;i++)
	len2=i;
	i=0;
	if(len1=len2)
	{
		while(i<len1)
		{
			if(str1[i]==str2[i])
			{
				i++;
			}
			else
			{
				break;
			}
		}
		if(i==len1 || i==len2)
		{
			flag=1;
			printf("two strings equal");
		}
	}
	if(flag==0)
	{
		if(str1[i]>str2[i])
		{
			printf("string 1 is big");
		}
		else if(str1[i]<str2[i])
		{
			printf("string 2 is big");
		}
	}
	if(len1!=len2)
	{
		printf("two strings not equal");
	}
	
}
