#include<stdio.h>
int main()
{
	int i,j,a[10],b[10],s1=0,s2=0,k;
	
	printf("votes of trump:- \n");
	for(i=0;i<10;i++)
	{
		printf("Enter the votes of trump in state %d: ",i+1);
		scanf("%d",&a[i]);
		s1=s1+a[i];	
	}
	printf("votes of biden:- \n");
	for(j=0;j<10;j++)
	{
		printf("Enter the votes of biden in state %d: ",j+1);
		scanf("%d",&b[j]);
		s2=s2+b[j];	
	}
	
	if(s1>s2)
	printf("overall winner is trump\n");
	else
	printf("overall winner is biden\n");
	
	for(k=0;k<10;k++)
	{
		if(a[k]>b[k])
		printf("trump is winner in state %d\n",k+1);
		else
		printf("biden is winner in state %d\n",k+1);
	}
}