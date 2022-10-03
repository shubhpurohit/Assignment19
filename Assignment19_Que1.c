#include<stdio.h>
int main()
{
    char str[5][30];
    int count;
    for(int i=0;i<5;i++)
        gets(str[i]);

   for(int i=0;i<5;i++)
   {    count=0;
       for(int j=0;j<str[i][j];j++)
       {
           if(str[i][j]=='a'||str[i][j]=='e'||str[i][j]=='i'||str[i][j]=='o'||str[i][j]=='u')
           {
               count++;
           }
       }
       printf("the number of vowels in str%d is %d \n",i+1,count);
   }

    return 0;
}
