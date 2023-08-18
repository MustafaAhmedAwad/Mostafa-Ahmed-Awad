#include<stdio.h>
#include<stdlib.h>
 
 node*Append(Node *head,DATA_TYPE data)
 {
    Node *new_node=NULL;   //local (in stacke)
     //create new node
     //reserve a block in heap

     new_node = (Node *)malloc(sizeof(Node));
     if (new_node == NULL)  //if error in add new node
     {
        printf("error creating new node");
     }

     //set data into new node
     new_node->data = data;
     new_node->next = NULL;

//link new node to the list
    if (head != NULL){       //linked list is not empty
    // set address in head to ptr_temp
    //this address points to 1st node
    Node *ptr_temp = head;
    while (ptr_temp->next != NULL){
        ptr_temp = ptr_temp->next;
    }
         ptr_temp->next = new_node;     //put the new node addres in node that points to null 
    }
    return new_node;
 }