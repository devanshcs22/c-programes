#include<stdio.h>
int main()
{
	int x,num;
	scanf("%d",&num);
	for(x=1;x<=10;x++)
	{
		int i=num*x;
		printf("%d x %d = %d\n",num,x,i);
		
	}
	return 0;
}