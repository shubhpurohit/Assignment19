#include<stdio.h>
#include<string.h>
int main()
{
    int i,j,n,count;
    char str[10][30];
    for(i=0;i<10;i++)
        gets(str[i]);
    for(i=0;i<10;i++)
    {
        n=strlen(str[i]);
        count=0;
        for(j=0;j<n/2;j++)
        {
            if(str[i][j]==str[i][n-j-1])
                count++;
        }
        if(count==n/2)
            puts(str[i]);
    }
    return 0;
}
