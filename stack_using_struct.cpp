//to implement stack using structure
#include<iostream>
#define size 10
using namespace std;
int top;
struct stack_s{

int data;
} stck[size];
 void initistck()
 {
     top=-1;
 }
int isempty()
{
    if(top==-1)
        return 1;
    else
        return 0;
}
int isfull()
{
    if(top==size-1)
        return 1;
    else
        return 0;
}
void push(int x)
{
    if(isfull())
    {
        cout<<"stack is full \n";
        return;
    }
    else
    {
        top++;
        stck[top].data=x;
        cout<<"element  inserted\n";
    }
}
void pop()
{
    int temp;
    if(isempty())
    {
        cout<<"stack is empty\n";
        return ;
    }
    else
    temp=stck[top].data;
    top--;
    cout<<"popped element is:"<<temp<<endl;

}
void display()
{
    if(isempty())
    {

        cout<<"stack is empty\n";
        return ;

    }
    else
    {   cout<<"displaying stack element\n";
        for(int i=top;i>=0;i--)
        {
            cout<<stck[i].data<<"\n ";
        }
    }
}
int main()
{
    int data,choice;
    char ch;
    initistck();
    do{
        cout<<"1.push\n 2.pop \n 3.display \n";
        cout<<"choose an operation to perform.\n";
        cin>>choice;
        switch(choice)
        {
        case 1:
            cout<<"enter element:\n";
            cin>>data;
            push(data);
            break;
        case 2:
            pop();

            break;

        case 3:
            display();
            break;
        default:
            cout<<"enter valid choice\n";


        }
        cout<<"enter y or Y to continue or enter any other letter to discontinue. \n";
        cin>>ch;


    }
    while(ch=='y'||ch=='Y');
        return 0;

}
