#include<stdio.h>
#include<stdlib.h>

int Insert_after(Node *head,int node_number,DATA_TYPE data)
{
    if(haed==NULL)
    {
        printf("the list is empty");
        return NULL;
    }

if((node_number>length(head))||(node_number<1))
{
    printf("the number is out of range");
}

   Node *prev=head,*New_node;
   int x=1;

    //create a new node
     Node *New_node;
     New_node = (Node *) malloc(sizeof(Node));

   if(New_node==NULL)
   {
    printf("error creating new node");
   }

     while(x<node_number)
     {
        prev=prev->next;
        x++;
     }
    //set data in new node
    New_node->data=data;
    New_node->next=prev->next;
    prev->next=New_node;
    return 1;
}