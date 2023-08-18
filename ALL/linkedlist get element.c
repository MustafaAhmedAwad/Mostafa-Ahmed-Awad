#include<stdio.h>
#include<stdlib.h>

int GET_ELEMENT(Node *head,int node_number,DATA_TYPE *element){
     if(head==NULL) {
       printf("list is empty\n");
     }

     if ((node_number>length(head))||(node_number<1)){
        printf("node_number is out of range/n");
     }
     
     Node *ptr_temp = head;
     int x =1;

     while(x<node_number){
        ptr_temp = ptr_temp->next;
        x++;
     }
    *element = ptr_temp->data;
    return 1;
}