#include<stdio.h>
int main ()
{
    int i;
    int data[50];
    int value;
    int pos;
    int size;


   printf("enter number of elements of array less then 50:\n");
   scanf("%d", &size);

   for(i = 0; i <size ; i++){
    printf("vlaue =[%d]\n",i );
    scanf("%d", &data[i]);
   }
   printf("enter the value you want to found it:\n");
   scanf("%d", &value);

   pos=-1;   //flag

   for(i = 0; i < size ; i++){    //linear search
    if(data[i] == value){
        pos = i;
        break;
    }

int lower=0;
int upper=size-1;
int mid;

    do { mid=(upper + lower)/2;    // binary search but must be sorted array
    if(value==data[mid])
    {
     pos = mid;
     break;
    }
    
  else if(value>data[mid])
  {
     lower=mid+1;
  }
  else
  {
    upper=mid-1;
  }

    }  while (lower<=upper);
    
    if (pos == -1){
   printf("the value is not found in the array\n");
    }
    else {
        printf("the value %d is found in data in pos %d",value,pos);
    }
}
}