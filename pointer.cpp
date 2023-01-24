#include<stdio.h>
int main()
{
	int a,b;
	int *p,*q;
	p=&a;
	q=&b;
	
	printf("%d %d Difference is %d",p,q,p-q);
}