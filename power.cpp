#include<stdio.h>
#include<math.h>
int main()
{
	int a,b;
	printf("enter the number:");
	scanf("%d",&a);
	printf("enter the number's power");
	scanf("%d",&b);
	int x=pow(a,b);
	printf("value=%d",x);
	return 0;
}
