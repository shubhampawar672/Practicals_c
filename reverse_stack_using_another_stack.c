#include<stdio.h>
#include<stdlib.h>
#define max 30

int st1[max];
int st2[max];
int top1=-1,top2=-1,ct=-1;

void push1(int data)
{
    st1[++top1]=data;
     ct++;
}
int pop1()
{
    return st1[top1--];
}

void push2(int data)
{
    st2[++top2]=data;
}

void reverse_stack()
{
    for(int i=0;i<=ct;i++)
    {
        push2(pop1());
    }
}
void display1()
{
    for(int j=0;j<=top1;j++)
    {
        printf(" %d ",st1[j]);
    }
    printf("\n");
}
void display2()
{
    for(int j=0;j<=top2;j++)
    {
        printf(" %d ",st2[j]);
    }
}
void main()
{
    push1(10);
    push1(20);
    push1(30);
    push1(40);
    push1(50);
    push1(60);
    printf("original stack  : \n ");
    display1();
    reverse_stack();
    printf("reversed stack  : \n ");
    display2();
}
