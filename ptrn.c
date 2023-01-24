#include<stdio.h>
void main(){
	int n,a,c,num,sum=0;
	
	printf("enter a number:-");
	scanf("%d",&n);

for(a=1;a<=n;a++)
{

	for(c=1;c<=a;c++)
	{
		sum=sum+a;
		printf("%d",sum);
	}
	printf("\n");
}
	
}