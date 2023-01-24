#include<stdio.h>
int main()
{
	int number;
	printf("enter the number");
	scanf("%d",&number);
	switch(number%2)
	{
	case 0:
	printf("Number is even");
	break;
	case 1:
	printf("Number is odd");
	break;	
	}
	
	
}