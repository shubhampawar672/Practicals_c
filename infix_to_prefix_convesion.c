#include<stdio.h>
#include<ctype.h>
#include<string.h>
char stack[20];
int top=-1;
void push(char x)
{
    stack[++top]=x;
}
char pop()
{
    if(top==-1)
        return -1;
    else
        return stack[top--];
}
int prece(char x)
{
    if(x==')')
        return 0;
    else if(x=='+'||x=='-')
        return 1;
    else if(x=='*'||x=='/')
        return 2;
    else if(x=='^')
        return 3;
    else
        return 0;
}
int main()
{

    char infix[20],prefix[20];
    char x;
    int i=0,k=0;
    printf("Enter infix expression:\n");
    scanf("%s",infix);
    strrev(infix);
    while((x=infix[i++])!='\0')
    {
        if(isalnum(x))
            prefix[k++]=x;
        else if(x==')')
            push(x);
        else if(x=='(')
        {
            while(stack[top]!=')')
                prefix[k++]=pop();
                pop();
        }
        else
        {
            while(prece(stack[top])>=prece(x))
                  prefix[k++]=pop();
            push(x);

        }
    }
    while(top!=-1)
    {
        prefix[k++]=pop();
    }
    prefix[k]='\0';
    strrev(prefix);
    printf("prefix expression is :%s",prefix);
    return 0;
}
