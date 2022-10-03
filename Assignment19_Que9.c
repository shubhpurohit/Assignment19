#include<stdio.h>
#include<string.h>
int fact(int);
int main()
{
    char usrNm[10][20];
    char entNm[20];
    int i,x,allow=0,ans,n;
    for(i=0;i<5;i++)
        gets(usrNm[i]);
    printf("Enter your username \n");
    gets(entNm);
    for(i=0;i<5;i++)
    {
        x=strcmp(usrNm[i],entNm);
        if(x==0)
            allow=1;
    }
    if(allow==1)
    {
        printf("you are allowed to calculate factorial\n");
        printf("Enter the number ");
        scanf("%d",&n);
        ans=fact(n);
        printf("%d",ans);
    }
    else
        printf("Username not found");
    return 0;
}

int fact(int n)
{
    if(n==1)
        return 1;
    return n*fact(n-1);
}
