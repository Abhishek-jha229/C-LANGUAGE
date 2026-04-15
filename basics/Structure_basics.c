#include<stdio.h>
#include<string.h>

struct address {
    int houseno;
    int block;
    char city[100];
    char state[100];
};
int main(){
    struct address add[3];
    add[0].houseno = 10;
    add[0].block= 50;
    strcpy(add[0].city , "benipur");
    strcpy(add[0].state , "bihar");

    add[1].houseno= 11;
    add[1].block = 51;
    strcpy(add[1].city , "darbhanga");
    strcpy(add[1].state , "manipur");

    printf("%s", add[0].city);


}
