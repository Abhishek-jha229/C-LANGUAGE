#include<stdio.h>

int sum(int, int);

int sum(int a, int b){
    a=4;
    return a + b;
}

int main(){
    int x = 1, y=6;
    printf("the sum of 1 and 6 is %d\n", sum(1,6));
    printf("the value of x is %d ",x);
    return 0;
}
