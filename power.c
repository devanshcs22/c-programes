#include<stdio.h>
int main()
{
	int a,n,p,pow=1;
	printf("Enter the number: ");
	scanf("%d",&n);
	printf("Enter the number: ");
	scanf("%d",&p);
	for(a=1;a<=p;a++)
	{
		pow=pow*n;
	}
	printf("%d",pow);
}