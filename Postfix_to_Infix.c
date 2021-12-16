//To convert postfix expression to infix expression
#include<stdio.h>
#include<string.h>
char stack[30];
int top=-1;
void push(char x)
{
    stack[++top]=x;
}
char pop()
{
    return stack[top--];
}
void post_to_in(char post[])
{
    int l,i,j=0;
    char temp[30];
    strrev(post);
    l=strlen(post);
    printf("Infix exp...\n");
    for(i=0;i<l;i++)
    {
        if( post[i]=='+'||post[i]=='-'||post[i]=='*'||post[i]=='/'||post[i]=='^')
        {
            push(post[i]);
        }
        else
        {
            temp[j++]=post[i];
             temp[j++]=pop();

        }

    }
    temp[j]=post[top--];
    strrev(temp);
    puts(temp);
}
int main()
{
    char post[30];
    printf("enter postfix expression:\n");
    gets(post);
    post_to_in(post);
    return 0;
}
