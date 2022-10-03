#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
    int i,w1=-1,w2=-1,min=10000;
    char words[5][20]={"my","name","name","is","shubham"};
    char word1[]="my";
    char word2[]="shubham";
    for(i=0;i<5;i++)
    {
        if(strcmp(words[i],word1)==0)
            w1=i;
         if(strcmp(words[i],word2)==0)
            w2=i;
    }
    if(w1!=-1&&w2!=-1)
        min=abs(w2-w1);
    printf("%d",min-1);
    return 0;
}
