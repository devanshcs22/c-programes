#include<stdio.h>
int main()
{
	int a,b,c;
	printf("enter the numbers");
	scanf("%d%d%d",&a,&b,&c);
	float d=(a+b+c)/3;
	printf("average of three numbers=%f",d);
	return 0;
}