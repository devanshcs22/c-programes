#include<stdio.h>
int main()
{
	int ordernum;
	scanf("%d",&ordernum);
	switch (ordernum){
		case 1:
			printf("Burger, price=40");
		break;
		case 2:
			printf("Cheese maggie, price=60");
		break;
		case 3:
			printf("Cold Coffee, price=50");
		break;
		case 4:
			printf("drink, price=45");
		break;
		default:
		{
			printf("no option");
		}
	}
	return 0;
}