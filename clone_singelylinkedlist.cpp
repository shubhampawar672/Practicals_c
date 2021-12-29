// to clone the given linked list
#include<iostream>
using namespace std;
struct node{
int data;
node *next;

};
node *head=NULL;
void Insert(int n)
{
    node *newnode=new node;
    newnode->data=n;
    newnode->next=head;
    head=newnode;
}
void printlist(node *Head)
{
    node *temp=Head;
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}
node *clone()
{
    node *curr=head;
    node *newhead=NULL;
    node *tail=NULL;
    while(curr!=NULL)
    {
        if(newhead==NULL)
        {
             newhead=new node;
             newhead->data=curr->data;
             newhead->next=NULL;
             tail=newhead;
        }
        else
        {
             tail->next=new node;
             tail=tail->next;
             tail->data=curr->data;
             tail->next=NULL;

        }
        curr=curr->next;

    }


    return newhead;
}
int main()
{
    Insert(1);
    Insert(2);
     Insert(3);
    Insert(4);
    cout<<" original list \n";
    printlist(head);
    node *d=clone();
    cout<<"\n cloned list \n";
    printlist(d);
    return 0;

}
