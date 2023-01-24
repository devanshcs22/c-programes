#include<stdio.h>
int main()
{
	int a,b,c;
	a=12;
	b=5;
	printf("before swap a=%d,b=%d\n",a,b);
	c=a;
	a=b;
	b=c;
	printf("after swap a=%d,b=%d",a,b);
	return 0;
}

