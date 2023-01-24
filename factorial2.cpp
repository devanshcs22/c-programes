#include<stdio.h>
int main()
{
   int a,i,fact=1;
   printf("enter the number: ");
   scanf("%d",&i);
   for(a=1;a<=i;a++)
   {
   	fact=fact*a;
   }
   printf("factorial of %d is %d",i,fact);
}