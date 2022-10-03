#include<stdio.h>
#include<string.h>
int main()
{
    int i,j,x;
    char str[10][30],temp[30];
    for(i=0;i<10;i++)
    {
        gets(str[i]);
    }
    for(i=0;i<10;i++)
    {
        for(j=i+1;j<10;j++)
        {
            x=strcmp(str[i],str[j]);
            if(x==1)
            {
                strcpy(temp,str[i]);
                strcpy(str[i],str[j]);
                strcpy(str[j],temp);
            }
        }
    }

    for(i=0;i<10;i++)
    {
        printf("%s\n",str[i]);
    }
    return 0;
}
