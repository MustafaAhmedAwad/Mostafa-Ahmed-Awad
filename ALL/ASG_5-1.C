#include <stdio.h>
// swap function
void swap(int *x, int *y) {
    int temp = *x;
    *x = *y;
    *y = temp;
}
//selection sort function
void selectionsort(int arr_1[], int size) {
    int i, j, min;
    for (i = 0; i < size - 1; i++) {
        min = i;
        for (j = i + 1; j < size; j++) {
            if (arr_1[j] < arr_1[min]) {
                min = j;
            }
        }
        if (i != min) {
            swap(&arr_1[min], &arr_1[i]);
        }
    }
}

int main() {
    int i,j,max,min;
    int arr_1[5];
    int size = sizeof(arr_1) / sizeof(arr_1[0]);

    //  the user to enter 5 numbers
    for (int i = 0; i < 5; i++) {
        printf("Enter number %d: ", i + 1);
        scanf("%d", &arr_1[i]);
    }

    // Perform selection sort
    selectionsort(arr_1, size);

    // Print the sorted array
    printf("\nSorted array: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr_1[i]);
    }
     printf("\n");
     min = arr_1[0];
     max = arr_1[0];
    for (i = 1; i < size; i++) {
        if (arr_1[i] > max) {
            max = arr_1[i];
        }
    }
    for (i = 1; i < size; i++) {
        if (arr_1[i] < min) {
            min = arr_1[i];
        }
    }
    // Find and print the positions of max and min
    for (j = 0; j < size; j++) {
        if (arr_1[j] == max) {
            break;
        }
    }
    printf("\nThe maximum number in the array is: %d and its position is %d\n", max, j + 1);
     printf("\n");
    for (j = 0; j < size; j++) {
        if (arr_1[j] == min) {
            break;
        }
    }
    printf("The minimum number in the array is: %d and its position is %d\n", min, j + 1);
    printf("\n");
    return 0;
}

