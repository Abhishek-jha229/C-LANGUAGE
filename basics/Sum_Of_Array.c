#include<stdio.h>
int main(){
   int arr[5] = {2,5,7,9,11};
   int sum = 0;
   for( int i= 0; i<5; i++){
      sum = sum + arr[i];
   }
   printf("%d", sum);
   return 0;
}
