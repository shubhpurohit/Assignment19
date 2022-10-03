#include<stdio.h>
#include<string.h>

int main()
{
    int i,j,x;
    char str[10][20],strsrch[20];
    printf("Enter strings\n");
    for(i=0;i<10;i++)
        gets(str[i]);

    printf("Enter string to search for ");
    gets(strsrch);

    for(i=0;i<10;i++)
    {
        x=strcmp(str[i],strsrch);
        if(x==0)
        {
            printf("the string is found at index %d \n ",i);
        }
    }

    return 0;
}
