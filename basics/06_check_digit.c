#include<stdio.h>
int main()
{
    char ch;
    printf("enter the character");
    scanf(" %c",&ch);
    if(ch>='0' && ch<='9'){
        printf("The character is a digit");
    }
    else{
        printf("The character is not a digit");
    }
    return 0;
}