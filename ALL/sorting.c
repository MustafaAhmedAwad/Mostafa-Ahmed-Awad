#include<stdio.h>
#define true 1
#define false 0

int main ()
{
    int data []={10,12,15,28,100,156,49,22,44,28};
    int size = sizeof(data)/sizeof(data[0]);
     int i = 0;
     int j ;
printf("data before sort");
     for(int i=0; i<size; i++)
     {
        printf("value[%d]=%d\n", i, data[i]);
     }

     //algorithm selection sort

     /*for (int i=0; i<size-1; i++)
     {
        for (int j=i+1; j<size;j++){
          if (data[i]>data[j]){          //assending sort order
            int temp;
            temp = data[i];            //swap data
            data[i] = data[j];
            data[j] = temp;
          }
        }
     }*/

     // algorithm bubble sort
     int sorted;

     do 
     {
        sorted=1;

        for(int i=0; i<size-1; i++){
            if (data[i]>data[i+1]){
                int temp;                //swap data
                temp=data[i];
                data[i]=data[i+1];
                data[i+1]=temp;
                sorted=0;
            }
        }

     }while(sorted==0);



printf("data after sorted");
     for(int i=0; i<size; i++)
     {
        printf("value[%d]=%d\n", i, data[i]);
     }



}