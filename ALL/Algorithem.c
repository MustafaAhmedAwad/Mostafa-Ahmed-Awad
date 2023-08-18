#include<stdio.h>
/*char linearsearch (int arr[], int size, int x) 
{
int i;
    for(i=0;i<size;i++)
    {
        if (arr[i]==x){
            return 1;  }
    }
    return 0;
}
int main(void)
{
    int arr[]={1,2,3,4,5,6,8,9,10,13,15,111};
    int x=13;
    int size=sizeof(arr)/sizeof(arr[0]);

    char result=linearsearch(arr,size,x);
    result==0
    ? printf("element is not found")
    : printf("%d elements found",x);
    return 0;
   


}*/
//************************************************************************************************
#include <stdio.h>//sorted array

void swap(int *x, int *y) {
    int temp = *x;
    *x = *y;
    *y = temp;
}

/*void selectionsort(int arr[], int size) {
    int i, j, min;
    for (i = 0; i < size - 1; i++) {
        min = i;
        for (j = i + 1; j < size; j++) {
            if (arr[j] < arr[min]) {
                min = j;
            }
        }
        if (i != min) {
            swap(&arr[min], &arr[i]);
        }
    }
}*/


    //************************************************************************************************
   #include <stdio.h>
void bubblesort(int arr[], int size) {
    int i, j;
    char flag = 1;  // Initialize flag to 1 to enter the loop
    for (i = 0; i < size - 1 && flag; i++) {
        flag = 0;  // Reset flag at the beginning of each pass
        for (j = 0; j < size - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {  
                swap(&arr[j], &arr[j + 1]);//fro, last code 
                flag = 1;  // Set flag if a swap occurred
            }
        }
    }
}

int main() {
    int arr[] = {1, 5, 15, 20, 32, 88, 12};
    int size = sizeof(arr) / sizeof(arr[0]);

    printf("Original array: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }

    bubblesort(arr, size);

    printf("\nSorted array: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
