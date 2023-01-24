#include<stdio.h>

void main()
{
	int x;
	
	for(x=1;x<10;x++)
	{
		*if(x>5 && x<8)
		{
			continue;
		}else{
			printf("%d",x);
		}
		
		printf("\n");
		}	

}