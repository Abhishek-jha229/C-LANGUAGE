#include<stdio.h>
int main()
{
    int a,b,c;
    printf("enter a,b,c");
    scanf("%d%d%d",&a,&b,&c);
    if(a<b && a<c){
        printf("smallest number is %d",a);
    }
    if(b<c && b<a){
        printf("smallest number is %d",b);
    }
    if(c<a && c<b){
        printf("smallest number is %d",c);
    }
    return 0;
}
