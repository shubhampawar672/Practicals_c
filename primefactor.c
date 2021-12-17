//to find prime facotrs of given numbers using stack
#include<stdio.h>
int stack[30],top=-1;
void push(int num)
{
    stack[++top]=num;
}
int pop()
{
    return stack[top--];
}
int PF(int n)
{
    int i=1;
    for(i=2;n!=1;i++)
    {
        while(n%i==0)
        {
            push(i);
            n=n/i;
        }
    }
    printf("prime factors are:");
    while(top!=-1)
    {
        printf("%d ",pop());
    }
    return 0;
}
void main()
{
    int n;
    printf("enter number:\n");
    scanf("%d",&n);
    PF(n);
}
