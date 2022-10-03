#include<stdio.h>
#include<string.h>
int main()
{
    int i,j;
    char str[3][30];
    int cnts[3]={0};
    printf("Enter emails\n");
    for(i=0;i<3;i++)
        gets(str[i]);

    for(i=0;i<3;i++)
    {
        for(j=0;str[i][j];j++)
        {
            if(str[i][j]=='@')
                {   cnts[i]=1;
                    break;
                }
        }
    }
    printf("the odd email is: ");
    for(i=0;i<3;i++)
    {
        if(cnts[i]==0)
            puts(str[i]);
    }

    return 0;
}
