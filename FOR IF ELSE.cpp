#include<stdio.h>
int main()
{
	int i;
	for(i=1;i<=150;i++)
	{
		if (i%3==0 && i%5==0){
			printf("rahul pradhan");
		}
		else if (i%3==0){
			printf("rahul");
		}
		else if (i%5==0){
			printf("pradhan");
		}
		else {
			printf("%d",i);	
		} 
	printf("\n");	
	}
	return 0;
}