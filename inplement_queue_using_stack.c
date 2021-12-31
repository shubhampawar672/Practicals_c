#include<stdio.h>
#include<stdlib.h>
#define max 30

int st1[max];
int st2[max];
int top1=-1,top2=-1,ct=0;

void push1(int data)
{
    st1[++top1]=data;
}
int pop1()
{
    return st1[top1--];
}

void push2(int data)
{
    st2[++top2]=data;
}
int pop2()
{
    return st2[top2--];
}
void enqueue()
{   int data;
    printf("\n enter data in queue ");
    scanf("%d",&data);
    push1(data);
    ct++;
}
void dequeue()
{
    int i;
    if(top1==-1)
    {
        printf("queue is empty..!\n");
    }
    else
    {


    for(i=0;i<=ct;i++)
    {
        push2(pop1());
    }
     pop2();
    ct--;
    for(i=0;i<=ct;i++)
    {
        push1(pop2());
    }
    }
}
void display()
{
    if(top1==-1)
    {
        printf("queue is empty..!\n");
    }
    else
    {


    for(int i=0;i<=top1;i++)
    {
        printf(" %d ",st1[i]);
    }
    }
}
int main()
{

    int ch;

    printf("\n1. Enqueue element into queue");
    printf("\n2. Dequeu element from queue");
    printf("\n3. Display from queue");
    printf("\n4. Exit");

    while (1)
    {
        printf("\nEnter choice");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
            enqueue();
            break;
        case 2:
             dequeue();

            break;
        case 3:
            display();
            break;
        case 4:
            exit(0);
        default:
            printf("Wrong choice");
        }
}
        return 0;
}
