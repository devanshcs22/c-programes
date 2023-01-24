#include<stdio.h>
int main()
{
	int x,num,i;
	scanf("%d",&num);
	for(x=1;x<=10;x++)
	{
		i=x*num;
		printf("%d\n",i);
	}
}