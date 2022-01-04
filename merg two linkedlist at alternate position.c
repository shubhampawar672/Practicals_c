//Exp 010
//shubham pawar
//20141236
//merge two linked list at alternate position
#include <stdio.h>
#include<stdlib.h>
struct node{
  int data;
  struct node *next;
};
void Insertnode(struct node **head,int x)
{
    struct node *newnode=(struct node *)malloc(sizeof(struct node));
    newnode->data=x;
    newnode->next=*head;
    *head=newnode;
}
void printlist(struct node *head)
{
    struct node *temp=head;
    while(temp!=NULL)
    {  printf("%d  ",temp->data);
        temp=temp->next;
    }
}
struct node* Merge(struct node* a, struct node* b)
{
    struct node  dummy;
    struct node * tail =& dummy;
    dummy.next = NULL;

    while (1)
    {
        if (a == NULL)
        {
            tail->next = b;
            break;
        }

        else if (b == NULL)
        {
            tail->next = a;
            break;
        }
        else {
            tail->next = a;
            tail = a;
            a = a->next;

            tail->next = b;
            tail = b;
            b = b->next;
        }
    }

    return dummy.next;
}


int main()
{
struct node *a=NULL,*b=NULL;
Insertnode(&a,5);
Insertnode(&a,7);
  Insertnode(&a,3);
Insertnode(&a,2);
printf("first list:\n");
printlist(a);
   Insertnode(&b,22);
Insertnode(&b,44);
  Insertnode(&b,9);
Insertnode(&b,1);
printf("\nsecond  list:\n");
printlist(b);
struct node *h=Merge(a,b);
printf("\nmerged list is:\n");
printlist(h);
    return 0;


}


