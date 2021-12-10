//Converting decimal to binary using stack:(Application of stack)
#include<stdio.h>
#include<stdlib.h>
int stack[20],top=-1;
void push(int r)
{
    stack[++top]=r;
}
int pop()
{
    if(top==-1)
        return -1;
    else
        return stack[top--];
}
void main()
{
    int n,rem;
    printf("Enter a number:\n");
    scanf("%d",&n);
    while(n!=0)
    {
        rem=n%2;
        push(rem);
        n=n/2;
    }
    while(top!=-1)
    {
        printf("%d",pop());
    }
}
