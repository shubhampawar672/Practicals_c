//to find  the middle of linked list (two pointer method)
//we can make two pointers one is fast and other is slow,fast pointer moves 2 node at a time while slow pointer moves one node at a time
//slow pointer will point to middle when fast pointer reach to last node i.e when it points to NULL
#include<iostream>
using namespace std;
struct node{
int data;
node *next;
};

node *head=NULL;
void Insert(int x)
{
    node *newnode=new node;
    newnode->data=x;
    newnode->next=head;
    head=newnode;
}
void display()
{
    node *temp=head;
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}
node *findmiddle()
{
    node* fast=head;
    node *slow=head;

    if(head)
    {
        while(fast!=NULL && fast->next!=NULL)
        {
            fast=fast->next->next;
            slow=slow->next;
        }
    }
    return slow;
}
int main()
{

    Insert(5);
    Insert(2);
    Insert(3);
    Insert(1);
    Insert(4);
    Insert(11);
    Insert(89);
    Insert(55);
    Insert(31);
    //Insert(90);
    cout<<"displaying list..\n";
    display();
    cout<<"\n middle element is : ";
    cout<<findmiddle()->data;
    return 0;

}
