#include<stdio.h>
int main()
{
	int i,a[7],*p,sum=0;
	p=a;
	
	for(i=0;i<7;i++)
	{
		printf("Enter the working hour of day %d in a week: ",i+1);
		scanf("%d",p+i);
		sum=sum+*(p+i);
	}
	printf("Total working hours of an employee are %d",sum);
	
	int d=sum-70;
	
	if((d>0)&&(d<=5))
	{
		printf("Total salary paid to the employee is 15000");
	}
	else if((d>=6)&&(d<=10))
	{
		printf("Total salary paid to the employee is 20000");
	}
	else if((d>10))
	{
		printf("Total salary paid to the employee is 25000");
	}
	else
	{
		printf("Total salary paid to the employee is 10000");
	}
}