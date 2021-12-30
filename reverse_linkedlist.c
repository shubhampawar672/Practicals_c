#include <stdio.h>
#include<stdlib.h>


struct node{
  int data;
  struct node *next;
};
struct node* head=NULL;
void Insertnode(int x)
{
    struct node *newnode=(struct node *)malloc(sizeof(struct node));
    newnode->data=x;
    newnode->next=NULL;

    if(head==NULL)
    {
        head=newnode;
    }
   else
   {struct node *temp=head;
    while(temp->next!=NULL)
    {
        temp=temp->next;
    }
    temp->next=newnode;
    }
}
void printlist()
{
    struct node *temp=head;
    while(temp!=NULL)
    {  printf("%d ",temp->data);
        temp=temp->next;
    }
}
void reverselist()
{
    struct node *curr=head;
     struct node *prev=NULL,*Next=NULL;
     while(curr!=NULL)
     {
         Next=curr->next;
         curr->next=prev;
         prev=curr;
         curr=Next;
     }
     head=prev;

}
int main()
{

    Insertnode(1);
    Insertnode(2);
    Insertnode(3);
    Insertnode(4);
    Insertnode(5);
    printlist();
    printf("\nreversed linked list\n");
    reverselist();
    printlist();
    return 0;


}

