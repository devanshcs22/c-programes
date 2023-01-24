#include<stdio.h>
int main()
{
	int x;
	for(x=1;x<=150;x++){
		
		if(x%3==0 &&  x%5==0){
			printf("rahul pradhan");
		}
		else if(x%3==0){
			printf("rahul");
		}
		else if(x%5==0){
			printf("pradhan");
		}
		else {
			printf("%d",x);
		}
		printf("\n");
		
	}
	return 0;
}