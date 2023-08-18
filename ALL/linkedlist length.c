#include<stdio.h>
include<stdlib.h>
 int length(node *head){
    int len=1;

    if (head==NULL) {  //linked list is empty
       printf("the list is empty");
    }
    //set address in head to ptr_temp
    //this address points to the 1st node 

    Node *ptr_temp = head;

    while (ptr_temp->next != NULL)
    {
        len++;
        //move ptr_temp to next node
        ptr_temp = ptr_temp->next;
    }
    return len;
 }