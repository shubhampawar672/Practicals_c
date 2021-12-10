#include<stdio.h>
#include<ctype.h>
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
int precedence(char x)
{
    if(x=='(')
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
    char infix[20];
    char *e,x;
    printf("enter the infix expression\n");
    scanf("%s",infix);
    e=infix;
    while(*e!='\0')
    {
        if(isalnum(*e))
            printf("%c",*e);
        else if(*e=='(')
                    push(*e);
        else if(*e==')')
        {
            while((x=pop())!='(')
                    printf("%c",x);
        }
        else
            {
                while(precedence(stack[top])>=precedence(*e))
                printf("%c",pop());
        push(*e);
            }
            e++;
    }
    while(top!=-1)
    {
        printf("%c",pop());
    }
    return 0;
}
