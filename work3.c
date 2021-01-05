#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define size 5

//q1
//**************************************************************************
int shift_element(int* arr, int i){
   for(int x = 0 ; x<i;x++){
      arr++;     
   }


   gonext(arr,arr+1);


   return 0;
}

int get_array_from_user(){
   int x;
   int array[size];
   
   for(int k=0 ; k < size ; k++){
      scanf("%d",&x); 
      *(array+k)=x;
   }

   return array;
}

int gonext(int *x,int *y){
   
   int temp = *y;
   y = *x;

   return temp;

}

void insertion_sort(int* arr , int len){
   //allocate memory
   int *ptr = (int*)malloc(len*sizeof(int));
   if(ptr==NULL){
      printf("memory not avialbe");
      exit(1);
   }
   for(int i=0 ; i<len ; i++){
     *(ptr+i) = *(arr+i);
     printf("%d",*(ptr+i));
   }

   int i;
   int j; 

   //The pointer to where it should be
   //The value

      //insertion_sort
      for (int i = 1 ; i < len-1 ; i++){
         int j=len;
         

         while (j>0  &&	*(ptr+j-1) > *(ptr+j-1) ){   

            swap(ptr+j-1,ptr+j);
         }


         j=j-1;
         
      }
   for (int  i = 0; i < 5; i++){
      printf("%d\n",*(ptr+i));
      //printf("%ls\n",&array[i]);

   }

}


void swap(int *x,int *y){
   int temp;

   temp= *x;
   *x =  *y;
   *y = temp;
}

//**************************************************************************

//q2
//**************************************************************************

char *get_line()
{
    char *line = NULL;
    int line_size = 1;
    int len = 0;
    int ch = 0;

    line = malloc(sizeof(char) * line_size);

    ch = fgetc(stdin);
    while (ch != EOF && ch != '\n')
    {
        line[len++] = ch;

        if (len == line_size)
        {
            line_size = line_size * 2;
            line = realloc(line, sizeof(char) * line_size);
        }

        ch = fgetc(stdin);
    }

    if (len == 0 && ch == EOF)
    {
        free(line);
        return NULL;
    }

    line[len++] = '\0';

    return realloc(line, sizeof(char) * len);
}

void print_lines(char *str)
{
    char *line = get_line();

    while (line != NULL)
    {
        if (strstr(line, str) != NULL)
        {
            printf("%s\n", line);
        }

        free(line);

        line = get_line();
    }

    return;
}
