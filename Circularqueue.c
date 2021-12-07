#include<stdio.h>
#define size 8
int que[size];
int front=-1,rear=-1;

int isfull()
{
    if((front==rear+1)||(front==0&&rear==size-1))
        return 1;
    return 0;
}
int isempty()
{
    if(front==-1)
        return 1;
    return 0;
}
void enqueue(int data)
{
    if(isfull())
        printf("queue is full \n");
    else{
        if(front==-1)
            front=0;
        rear=(rear+1)%size;
        que[rear]=data;
        printf("Inserted :%d\n",data);
    }
}
int dequeue()
{
    int data;
    if(isempty())
        {printf("queue is empty!\n");
    return -1;}
    else
    {    data=que[front];
        if(front==rear){
            front=-1;
            rear=-1;
        }
        else
        {
         front=(front+1)%size;
        }
        printf("dequed element is: %d\n",data);
        return data;
    }
}

void display()
{
int i;
if(isempty())
{
    printf("queue is empty:\n");
}
else
{
    printf("elements are:\n");
 for(i=front;i!=rear;i=(i+1)%size)
 {
     printf("%d\n",que[i]);
 }
 printf("%d\n",que[i]);

}
}

void main(){

printf("Circular queue:\n");
enqueue(3);
enqueue(7);
enqueue(8);
enqueue(9);
enqueue(10);
enqueue(11);
display();

dequeue();
dequeue();
dequeue();
display();
}
