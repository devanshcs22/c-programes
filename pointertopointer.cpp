#include<stdio.h>
int main()
{
	int a[]={7,2,4,5,3};
	int *p;
	p=a;
	printf("%d\n",*p);
	for(int i=0;i<5;i++)
	{
		printf("%d ",*(p+i));
	}
}