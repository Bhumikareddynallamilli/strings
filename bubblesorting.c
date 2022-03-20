#include<stdio.h>
void main()
{
	int sales[12],i,j,temp;
	for(i=0;i<12;i++)
	{
		scanf("%d",&sales[i]);
		printf("before sorting");
	}
	for(i=0;i<12;i++)
	{
		printf("%d",sales[i]);
	}
	for(i=0;i<12-i-1;i++)
	{
		for(j=0;j<12;j++)
		{
			if(sales[j]>sales[j+1])
			{
				temp=sales[i];
				sales[j]=sales[j+1];
				sales[j+1]=temp;
			}
		}
	}
	printf("\nafter sorting");
	for(i=0;i<12;i++)
	{
		printf("%d",sales[i]);
	}
}
