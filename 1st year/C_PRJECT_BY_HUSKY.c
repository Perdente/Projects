/*A Project on Bookshop management */

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define ENTER 13  //macro defination
#define TAB 9
#define BACKSPACE 8
#define SPACE 32

/*
ASKII value    of   enter      is     13
  ''    ''     ''   tab        ''     9
  ''    ''     ''   backspace  ''     8
  ''    ''     ''   space      ''     32
*/
char id[100];

char date[100];

char uname[100];

char bname[100];

char cost[100];

int n,i;

void write()
{
   FILE *fp;
   
   char id[100];

   char dat[100];

   char unam[100];

   char bnam[100];

   char cos[100];
   


   printf("\nEnter Date ::");

   scanf("%s",&dat);
   
   fflush(stdin);
   
   printf("Enter Users ID ::");
   
   gets(id);
   
   fflush(stdin);
   
   printf("Enter Name of customer :: ");

   gets(unam);
   
   printf("Enter Name of book ::");

   gets(bnam);
   
   fflush(stdin);

   printf("Enter Cost of book ::");
   
   gets(cos);

   fflush(stdin);

   fp=fopen("Record.txt","a");

   fprintf(fp,"\n%s\n%s\n%s\n%s\n%s\n",dat,id,unam,bnam,cos);

   printf("\n\t\nRecord written successfully!!!!");

   fclose(fp);
}



void display(char da[])
{
    FILE *fp;

    int res;

    fp=fopen("Record.txt","r");
    
   

    while(fscanf(fp,"%s%s%s%s%s",&date,&id,&uname,&bname,&cost)!=EOF)
    
    

    {
        res=strcmp(date,da);

        if(res==0)
        {
        	printf("\n\n\nid=%s\n",id);
        	
            printf("\nCustomer name=%s\n",uname);

            printf("\nBook name=%s\n",bname);

            printf("\nBook cost=%s\n",cost);
        }
        else
        {
        	if(res==1)

			{
			printf("No record is found");
		    }
        }
    }
    getch();

    fclose(fp);
\
}


int main()
{

    system("COLOR 02");

    char username[100];

    char password[100];

    int i=0;

    char ch;

    char lm[20];

    printf("\n\t\t****Welcome to the library of HUSKY_CODERS****\n\n\n");

    printf("\nEnter user name:");

    scanf("%s",username);

    printf("\nEnter password:");

    while(1)
    {
        ch=getch();

        if(ch==ENTER)
        {
            password[i]='\0';

            break;

        }
        else if(ch==BACKSPACE)

        {
            if(i>0)

            {
                i--;

                printf("\b \b");//cursor moves one position left
            }

        }
        else if(ch==TAB||ch==SPACE)
        {
            continue;
        }
        else
        {
            password[i]=ch;

            i++;

            printf("*");
        }
    }
    if(strcmp(username,"cste")==0)
        {


        if(strcmp(password,"12")==0)
        {
            printf("\n\n\t\t\tWelcome::login successful\n\n");
        }
        else
        {

            printf("\n\n\t\t\tpassword is incorrect\n\n");


            return ;

    }


    }
    else
    {
            printf("\n\n\t\t\tuser name is invalid\n\n");
            
            return ;

    }

do
    {
        printf("\n\nDo you want to enter data for your books????\n\n");

        printf("\npress<1> to create entry for books");

        printf("\npress<2> to display on specific date");

        printf("\npress<0> to exit");

        printf("\n\nEnter Choice::");

        scanf("%d",&ch);

        fflush(stdin);

        switch(ch)
        
        {
            case 1:write();

            break;

            case 2:printf("\n\n\nEnter date::");
            
			scanf("%s",&lm);
            
            fflush(stdin);

            display(lm);

            break;

            case 0:exit(0);


             default:printf("\ninvalid selection\n");

    }


           getch();


    }


    while(ch!=0);


    getch();


}
