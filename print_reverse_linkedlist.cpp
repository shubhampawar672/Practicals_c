//To print the linked list in reverse order
#include <iostream>

using namespace std;
struct node{
  int data;
  node *next;

};
node *head=NULL;

node *stack[10];
int top=-1;
void push(node *x)
{
    stack[++top]=x;
}
node *pop()
{
    return stack[top--];
}
void add(int n)
{
    node *newnode=new (node);
    newnode->data=n;
    newnode->next=head;
    head=newnode;
}
void print()
{
    node *curr=head;
    while(curr!=NULL)
    {
        cout<<curr->data<<" ";
        curr=curr->next;
    }
}
void printreverce()
{
    node *ptr=head;
    while(ptr!=NULL)
    {
        push(ptr);
        ptr=ptr->next;
    }
    while(top!=-1)
    {
        cout<<pop()->data<<" ";
    }
}

int main()
{

    add(5);
    add(4);
    add(3);
    add(2);
    add(1);
    cout<<"printing in order:\n";
    print();
    cout<<"\nprinting in reverse order:\n";
    printreverce();
    return 0;
}

