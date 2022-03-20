#include<stdio.h>
void main()
{
	char str[100];
	scanf("%[^\n]",str);
	int i,j,t,len=0;
	for(i=0;str[i]!='\0';i++)
	{
		len=len+1;
	}
	i=0;
	j=len-1;
	while(i<j)
	{
		t=str[j];
		str[j]=str[i];
		str[i]=t;
		i++;
		j--;
	}
	printf("%s",str);
}
