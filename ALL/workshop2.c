
#include <stdio.h>

void print(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        if (arr[i] % 2 == 0) {
            printf("The number %d is even\n", arr[i]);
        } else {
            printf("The number %d is odd\n", arr[i]);
        }
    }
}

int main() {
    int size;

    printf("Enter the number of array elements: ");
    scanf("%d", &size);

    int arr[size];  

    printf("Enter %d elements:\n", size);
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    print(arr, size); 

    return 0;
} 
