#include<stdio.h>
int main()
{
	int a=10,b=11,c=12,d=13;
	a=b++;
	c=a++;
	b=++c;
	d=++b;
	a=--c;
	b=a--;
	printf("a=%d\nb=%d\nc=%d\nd=%d",a,b,c,d);
	return 0;
	
}