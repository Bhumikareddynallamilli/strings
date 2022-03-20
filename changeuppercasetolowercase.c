#include<stdio.h>
void main()
{
	char str[1000];
	scanf("%s",str);
	printf("original string: %s\n",str);
	printf("%s",str);
	int i=0;
	while(str[i]!='\0')
	{
		if(str[i]>='A' && str[i]<='Z')
		{
			str[i] = str[i]+32;
		}
		i++;
	}
	printf("lowercase string :%s",str);
}
