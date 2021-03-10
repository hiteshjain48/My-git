#include<stdio.h>
int main()
{
    char a;
    printf("Enter a character\n");
    scanf("%c", &a);
    if (a>=65 && a<=90 )
    {
        printf("character is capital\n");
    }
    else
    {
        printf("try later\n");
    }
}