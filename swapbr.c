#include<stdio.h>
int swap(int *a, int *b)
{
	int c=*a;
	*a=*b;
	*b=c;
	printf("value of a after swap is %d\n",*a);
	printf("value of b after swap is %d",*b);
}
int main()
{
	int x,y;
	printf("Enter the value of a: ");
	scanf("%d",&x);
	printf("Enter the value of b: ");
	scanf("%d",&y);
	swap(&x,&y);
}