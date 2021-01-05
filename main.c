#include <stdio.h>
#include "work3.h"
#define size 5
#define MAXLEN 256



int main(void){
   int array[10]= {3,1,2,400000,0};
   int i = 3;
   int *ptr = (int*)malloc((i+1)*sizeof(int));
   if(ptr==NULL){
      printf("memory not avialbe");
      exit(1);
   }
   for (int x = 0 ; x<i ; x++){


      *(ptr+x) = *(array+x);

   } 
   shift_element(ptr,i);
   printf(ptr);

}

