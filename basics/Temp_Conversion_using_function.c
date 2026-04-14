#include<stdio.h>

float c2f(float c);

float c2f(float c){
    return ((9*c)/5) + 32;
}

int main(){
    float c ;

    printf("Enter temperature in Celsius : ");
    scanf("%f",&c);
    printf("Celsius to Fahrenheit for %f is %.2f", c, c2f(c));
    return 0;
}
