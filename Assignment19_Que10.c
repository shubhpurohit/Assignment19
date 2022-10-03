#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main()
{
    char username[10][15],pwd[10][15],user[15],password[15],newpass[15],newuser[15];
    int i,j,n,x,num,valid=0,index,allowed;
    printf("Enter the number of user (max 10)\n");
    scanf("%d",&num);

    printf("Start entering the username and their password\n");
    for(i=0;i<num;i++)
    {
       gets(username[i]);
        gets(pwd[i]);
    }
    while(1)
    {
        printf("Enter what you want to perform\n");
        printf("1. Login into system \n");
        printf("2. Change password \n");
        printf("3. Add new password \n");
        printf("4. Exit\n");
        printf("Enter choice \n");
        scanf("%d",&n);

        switch(n)
        {
        case 1:
            valid=0;
            printf("Enter your username \n");
            gets(user);
            for(i=0;i<num;i++)
            {
                x=strcmp(username[i],user);
                if(x==0)
                {
                    valid=1;
                    index=i;
                    break;
                }
            }
            if(valid==1)
            {
                valid=0;
                printf("Enter password\n");
                gets(password);
                if(pwd[index]==password)
                   {
                       printf("You successfully logged in!!\n");
                       break;
                   }
                else
                    {printf("Invalid password");
                        break;
                    }
            }
            else
            {
                printf("Invalid username\n");
                break;
            }



        case 2:
            printf("First verify then you can change the password for that account\n");
            valid=0;
            printf("Enter your username \n");
            gets(user);
            for(i=0;i<num;i++)
            {
                x=strcmp(username[i],user);
                if(x==0)
                {
                    valid=1;
                    index=i;
                    break;
                }
            }
            if(valid==1)
            {   allowed=0;
                valid=0;
                printf("Enter password\n");
                gets(password);
                if(pwd[index]==password)
                   {
                       printf("You successfully logged in!!\n");
                       allowed=1;
                    }
                else
                    {printf("Invalid password");
                        break;
                    }
            }
            else
            {
                printf("Invalid username\n");
                break;
            }

            if(allowed==1)
            {
                printf("You can now change your password\n");
                printf("Enter your new password:- ");
                gets(newpass);
                strcpy(pwd[index],newpass);
            }
            printf("password successfully changed\n");
            break;

        case 3:
            if(num>10)
            {
                printf("enter new user name:- ");
                gets(username[num]);
                printf("enter its password:- ");
                gets(pwd[num++]);
            }

            else
            {
                printf("number of users exceeded");
            }
            break;
        case 4:
            printf("\n\n\t\tThanks!\n");
            exit(0);
        }
    }
    return 0;
}
