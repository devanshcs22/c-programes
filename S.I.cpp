#include<stdio.h>
int main()
{
	float p,t,r,si;
	printf("principle value");
	scanf("%f",&p);
	printf("time");
	scanf("%f",&t);
	printf("rate");
	scanf("%f",&r);
	si=(p*t*r)/100;
	printf("simple innterest=%f",si);
	return 0;
	
}
