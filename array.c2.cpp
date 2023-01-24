#include<stdio.h>
int main()
{
	int Num[5],x,sum=0;
	printf("enter 5 numbers:-");
	for (x=0;x<5;x++)
	{
		scanf("%d",&Num[x]);
		sum=sum+Num[x];
	}
    
	
printf("total sum=%d",sum);

	
}