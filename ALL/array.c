#include<stdio.h>
/*#define x  

int main ()
{
#ifndef x 
printf("defined x");  
#endif
}*/
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////


/*int main ()
{
    int arr [3] = {[0 ... 2]=-1};
    printf("%d",arr);
}*/

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////


/*int main() {
    int arr[5] = {1, 2, 3, 4, 5};
    printf("%d", sizeof(arr) / sizeof(arr[0]));

    return 0;
}*/

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/*/int main() {
int arr[5];
arr++;
int (*ptr)[5]; // pointer to array of 5
ptr=arr;
printf("%p",*(ptr+1));
}*/
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

/*void fun(int array[5], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");
}

int main() {
    int size = 5;
    int arr[5] = {1, 2, 3, 4, 5};

    fun(arr, size);

    return 0;
}*/

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    void fun (int arr [2][4],int r,int c )
{
    for(int i = 0; i < r; i++){
        for(int j=0 ; j<c ;j++){
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
}
int main()
{
    int r=2,c=4;
 int  arr [2][4]={{1,2,3,4},{5,6,7,8}};
 fun(arr,r,c);
}

 