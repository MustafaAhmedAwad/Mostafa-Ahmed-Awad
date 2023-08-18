#include <stdio.h>
#include <stdlib.h> // Include this header for malloc

struct node 
{
    int data;
    struct node* next; // Corrected typo: "strucr" to "struct"
};

int main ()
{
    struct node *front, *back, *ptr;
    int size, i;

    printf("Please enter size:");
    scanf("%d", &size);

    front = NULL;

    for (i = 0; i < size; i++) {
        if (front == NULL) {
            ptr = (struct node *)malloc(sizeof(struct node));
            front = ptr;
            back = ptr; // Initialize the back pointer too
        } else {
            ptr->next = (struct node *)malloc(sizeof(struct node));
            ptr = ptr->next;
            back = ptr;
        }
        
        if (ptr != NULL) {
            printf("Please enter value[%d]:", i);
            scanf("%d", &ptr->data);
            ptr->next = NULL; // Initialize the next pointer
        }
    }

    // Print the linked list for verification
    ptr = front;
    while (ptr != NULL) {
        printf("%d -> ", ptr->data);
        ptr = ptr->next;
    }
    printf("NULL\n");

printf("value in front is %d\n", front->data);
 printf("value in back is %d\n", back->data);

    // Free the allocated memory
    ptr = front;
    while (ptr != NULL) {
        struct node *temp = ptr;
        ptr = ptr->next;
        free(temp);
    }
 
    return 0;
}
