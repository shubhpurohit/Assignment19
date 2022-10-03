#include<stdio.h>
#include<string.h>

int main()
{
    int i;
    char str[5][20];
    printf("Enter strings\n");
    for(i=0;i<5;i++)
        gets(str[i]);

    printf("Entered strings are\n");
    for(i=0;i<5;i++)
        puts(str[i]);

    return 0;
}
