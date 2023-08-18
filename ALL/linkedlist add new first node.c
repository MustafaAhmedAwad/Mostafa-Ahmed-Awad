#include<stdio.h>
#include<stdlib.h>

Node *Insert_first(Node *head,DATA_TYPE data)
{
if(head == NULL)
{
    printf("the list is empty");
    return NULL;
}
Node *first_node;

//create a new node
first_node=(Node *)malloc(sizeof(Node));


if(first_node == NULL)   //error creating the node
{
    printf("error creating new node");
    return head;
}

//set data into the node
first_node->data = data;
fisrt_node->next=head;
head=first_node;
return head;
}