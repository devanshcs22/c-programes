#include<stdio.h>

int main()
{
  int n,i;
  float sum=0,x;
  printf("enter the number of elements: ");
  scanf("%d",&n);
  printf("enter the elements: ");
  for(i=0;i<n;i++)
    {
  	scanf("%f",&x);
  	sum+=x;
    } 
	printf("average of entered numbers is %f",(sum/n));
	
}
	