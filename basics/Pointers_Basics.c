#include<stdio.h>
int main(){
    char i ='A';
    char *j= &i;

    float k = 3.14;
    float *k1=&k;
    
    printf("address of i is %u\n",i);
     printf("address of i is %u\n",&i);
      printf("address of i is %u\n",j);
 printf("address of j is %u\n",j);

  printf("address of k is %u\n",k);
   printf("address of i is %u\n",&k);
    printf("address of i is %u\n",k1);

    printf("value at address %c\n",i);
    printf("value at address %c\n",*(&i));
    printf("value at address %f\n",k);





    return 0;
}
