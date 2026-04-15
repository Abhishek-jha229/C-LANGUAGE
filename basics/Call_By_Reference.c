#include<stdio.h>

int sum(int *, int *);

int sum(int *a, int *b){
    *a=51;      //the value of x is changed by this method
    return *a + *b;
}

int main(){

    int x = 1, y = 9;
    printf("the sum of x and y is %d\n", sum(&x,&y));
    printf("the value of x is %d\n", x);
    return 0;
}
