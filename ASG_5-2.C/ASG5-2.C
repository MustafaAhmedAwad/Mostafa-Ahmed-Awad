#include <stdio.h>

void reverse(int arr[], int size) {
    for (int i = 0; i < size / 2; ++i) {
        int temp = arr[i];
        arr[i] = arr[size - i - 1];
        arr[size - i - 1] = temp;
    }
}

int main() {
    int arr[5];
    int size = sizeof(arr) / sizeof(arr[0]);

    for (int j = 0; j < 5; j++) {
        printf("Enter number %d: ", j + 1);
        scanf("%d", &arr[j]);
    }

printf("Original array: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    // Call the reverse function here, after input is collected
    reverse(arr, size);


    printf("\nArray after reverse: ");
    for (int k = 0; k < size; k++) {
        printf("%d ", arr[k]);
    }

    return 0;
}
