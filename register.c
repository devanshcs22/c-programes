#include<stdio.h>
#include<conio.h>
#include<windows.h>
#define ENTER 13
#define TAB 9
#define BCKSPC 8
struct user{
    
    char email[50];
    char password[50];
    char username[50];
    
};

void takeinput(char ch[50])
{
    fgets(ch, 50, stdin);
    ch[strlen(ch) - 1] = 0;
}

char generateUsername(char email[50], char username[50])
{
    for(int i=0; i<strlen(email); i++)
    {
        if(email[i] == '@')
        break;
        else
        email[i] = username[i];
    }
}
void takepassword(char pwd[50])
{
	int i;
	char ch;
	while(1){
		ch= getch();
		if(ch == ENTER || ch == TAB)
		{
			pwd[i]='\0';
			break;
		}
		else if(ch==BCKSPC)
		{
			if(i>0)
			{
				i--;
				printf("\b \b");	
			}
		}
		else
		{
			pwd[i++]=ch;
			printf("* \b");
		}
	}
}

int main()
{
    int opt;
    struct user user;
    char password2[50];

    printf("\t\t\t\t\t----------welcome----------\n");
    printf("\nPlease Choose Your Operation");
    printf("\n1.Signup");
    printf("\n2.Login");
    printf("\n3.Exit");

    printf("\nyour choice: ");
    scanf("%d", &opt);
    fgetc(stdin);

    switch(opt)
    {
        case 1:
        
        printf("\nEnter your email: ");
        takeinput(user.email);
        
        printf("\nEnter your password: ");
        takepassword(user.password);
        
        printf("\nConfirm your password:\t");
        takepassword(password2);
        
        if(!strcmp(user.password,password2))
        {
        generateUsername(user.email,user.username);
        printf("\nYour username is %s",user.username);
    	}
        else
        {
        	printf("\nPassword mismatched");
		}
        
    }
	return 0;
}