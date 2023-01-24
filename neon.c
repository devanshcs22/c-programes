#include<stdio.h>
void main(){
	int n,a,c,num,sum=0;
	
	printf("enter a number:-");
	scanf("%d",&n);
	c=n;
	a=n*n;
	
	while(a>0)
	{
		num=a%10;
		sum=sum+num;
		a=a/10;
	}
	
	if(sum==c)
	{
		printf("Neon Number");
		
	}else{
		printf("Not A Neon number");
	}
	
}