#include <iostream>

using namespace std;
struct node{
  int data;
  node *next;

};
node *head=NULL;

int stack[10];
int top=-1;
void push(int x)
{
    stack[++top]=x;
}
int pop()
{
    return stack[top--];
}
int top_ele()
{
    return stack[top];
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
bool isPalindrom()
{

    node *temp=head;
    while(temp)
    {
        push(temp->data);
        temp=temp->next;
    }
    while(head!=NULL)
    {
        int element=top_ele();
        pop();
        if(head->data!=element)
        {
            return false;
        }
        head=head->next;
    }
    return true;
}

int main()
{

    add(1);
    add(2);
    add(3);
    add(3);
    add(2);
    add(1);
    print();
    if(isPalindrom())
        cout<<"\nLinked list is Palindrome";
    else
        cout<<"\nLinked list is not Palindrome";

    return 0;
}


