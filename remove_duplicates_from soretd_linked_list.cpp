//to remove duplicate from given sorted linked list
#include<iostream>
#include<cstdlib>
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
void printlist()
{
    node *temp=head;
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}
void remove_duplicate()
{
    node *curr=head;
    if(head==NULL)
    {
        return ;
    }
    while(curr->next!=NULL)
    {
        if(curr->data==curr->next->data)
        {
            node *nextnode=curr->next->next;
            delete(curr->next);
            curr->next=nextnode;
        }
        else
        {
            curr=curr->next;
        }
    }
}
int main()
{
    Insert(2);
    Insert(3);
    Insert(3);
    Insert(4);
    Insert(4);
    Insert(5);
    printlist();
    cout<<endl;
    remove_duplicate();
    cout<<"after removing duplicate \n";
    printlist();
    return 0;
}
