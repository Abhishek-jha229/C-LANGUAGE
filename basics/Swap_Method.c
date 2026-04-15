#include<stdio.h>
int main(){
    int a;
    printf("Enter a : ");
    scanf("%d",&a);
     int b;
    printf("Enter b : ");
    scanf("%d",&b);
    // int temp =a;
    // a = b;
    // b = temp;
    a = a+b;
    b = a-b;
    a = a-b;
    printf("the value of a is %d",a);
    printf("\n");
    printf("the value of b is %d",b);
    return 0;
}
