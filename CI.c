#include<stdio.h>
#include<math.h>
int main()
{
	float principal,time,rate,CI,amount;
	printf("Enter the principal:");
	scanf("%f",&principal);
	printf("Enter the time:");
	scanf("%f",&time);
	printf("Enter the rate:");
	scanf("%f",&rate);
	amount=principal*(pow((1+rate/100),time));
	CI=amount-principal;
	printf("compund interest:%f",CI);
	return 0;
}