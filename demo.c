#include<stdio.h>

void main()
{
char ch;

printf("Enter An Alphabet:-");
scanf("%c",&ch);

if(ch>=97)
{
	
	printf("final=%c",ch-32);
}else if(ch>=65 && ch<=97){
	
	printf("final=%c",ch+32);
}

	
		
}


