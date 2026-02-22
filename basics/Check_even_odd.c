#include<stdio.h>
int main()
{
    int number;
    printf("enter number = ");
    scanf("%d",&number);
    if(number%2==0){
        printf("%d number is even",number);
    }
    else{
     printf("%d number is odd",number);
    }
    return 0;
}
