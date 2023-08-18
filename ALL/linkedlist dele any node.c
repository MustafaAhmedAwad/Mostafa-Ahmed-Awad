#include<stdio.h>
#include<stdlib.h>
 
 int Delet_Node(Node *head,int node_number)
 {
  if (head == NULL)
  {
    printf("the list is empty");
  }
 
 if((node_number >length(head))||(node_number<2))
{
    printf("the node number not enough");
}

    Node *prev=head *current;
    int x=1;

    while(x<node_number-1)
    {
        prev=prev->next;
        x++;
    }
    current=prev->next;
    prev->next=current->next;
    free(current);
 }