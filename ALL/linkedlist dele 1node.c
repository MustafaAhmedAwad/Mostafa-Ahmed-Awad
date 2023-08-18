#include<stdio.h>
#include<stdlib.h>
 
 Node* Delet_First_Node(Node*head){
    if(head==NULL) return NULL;

    //check list length
    if(length(head)==1){
        free(head);
        return NULL;
    } 
    else{        //more than one node
        Node *second_node ;
        second_node = head->next;
        free(head);
        return second_node;
    }
 }