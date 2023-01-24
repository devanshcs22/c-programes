#include<stdio.h>
int swap(int a,int b)
{
	a=a+b;
	b=a-b;
	a=a-b;
	printf("first value after swap is %d\n",a);
	printf("second value after swap is %d\n",b);
}
int main()
{
	int x,y;
	printf("Enter the first value: ");
	scanf("%d",&x);
	printf("Enter the second value: ");
	scanf("%d",&y);
	swap(x,y);
}