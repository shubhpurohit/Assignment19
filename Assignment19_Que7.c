#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
    int x,count,i;
    char strIP[10][20];

    for(i=0;i<3;i++)
        gets(strIP[i]);
    for(i=0;i<3;i++)
    {
        count=0;
        char *a=strtok(strIP[i],".");
        while(a!=0)
        {
            x=atoi(a);
            if((x>=0)&&(x<=255))
                count++;
            a=strtok(NULL,".");
        }
        if(count==4)
            printf("%s - valid IP\n",strIP[i]);
        else if(count!=4)
            printf("%s - Invalid IP\n",strIP[i]);
    }
    return 0;
}
