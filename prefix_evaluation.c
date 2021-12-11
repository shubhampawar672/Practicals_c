#include<stdio.h>
#include<ctype.h>
#include<string.h>
int stack[20],top=-1;
void push(int x)
{
    stack[++top]=x;
}
int pop()
{
    if(top==-1)
        return -1;
    else
        return stack[top--];
}
int evalpre(char prefix[20])
{
    int n1,n2,size;
    size=strlen(prefix)-1;
    for(int i=size;i>=0;i--)
    {
        if(isdigit(prefix[i]))
        {
            push(prefix[i]-'0');
        }
        else
        {
            n2=pop();
            n1=pop();
            if(prefix[i]=='+')
                push(n2+n1);
            else if(prefix[i]=='-')
                push(n2-n1);
            else if(prefix[i]=='*')
                push(n2*n1);
            else if(prefix[i]=='/')
                push(n2/n1);
            else printf("invalid operartor\n");
        }
    }
    return pop();
}
void main()
{
    char prefix[20];
    printf("enter prefix expression:\n");
    gets(prefix);
    printf("prefix evaluation :%d",evalpre(prefix));

}
