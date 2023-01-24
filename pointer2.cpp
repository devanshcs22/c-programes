#include<stdio.h>
int main()
{
	int a,b,c,d;
	scanf("%d%d%d",&a,&b,&c);
	int *p,*q,*r;
	p=&a;
	q=&b;
	r=&c;
	
	d=(*p>*q)?((*p>*r)?*p:*r):((*q>*r)?*q:*r);
	
	printf("largest among three numbers is %d",d);
}