#include<stdio.h>
int main()
{
	int a[5],b[5],*p,*q,s1=0,s2=0;
	p=a;
	q=b;
	for(int i=0;i<5;i++)
	{
		printf("Enter the marks of Ria in subject %d: ",i+1);
		scanf("%d",p+i);
		s1=s1+*(p+i);
	}
	printf("\n\n");
	for(int i=0;i<5;i++)
	{
		printf("Enter the marks of Sia in subject %d: ",i+1);
		scanf("%d",q+i);
		s2=s2+*(q+i);
	}
	if(s1>s2)
	printf("Ria scored more than Sia\n");
	else
	printf("Sia scored more than Ria\n");
	
	for(int i=0;i<5;i++)
	{
		if(*(p+i)>*(q+i))
		printf("Ria scored more than Sia in subject %d\n",i+1);
		else if(*(p+i)==*(q+i)) 
		printf("Ria and Sia has similar marks in subject %d\n",i+1);
		else
		printf("Sia scored more than Ria in subject %d\n",i+1);
	}
}