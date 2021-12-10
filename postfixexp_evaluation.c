//Program to evaluate postfix expression
#include<stdio.h>
int stack[20];
int top=-1;
void push(int x)
{
    stack[++top]=x;
}
int pop()
{
    return stack[top--];

}
int main()
{

    char postfix[20];
    char *e;
    int n1,n2,result,n3;
    printf("enter exp...\n");
    scanf("%s",postfix);
    e=postfix;
    while(*e!='\0')
    {
        if(isdigit(*e))
        {
            n3=*e-'0';
            push(n3);
        }
        else
        {
            n1=pop();
            n2=pop();
            switch(*e)
            {

            case '+':
                {
                    result=n1+n2;
                    break;
                }
                case '-':
                {
                    result=n1-n2;
                    break;}
                    case '*':
                {
                    result=n1*n2;
                    break;}
                    case '/':
                {
                    result=n1/n2;
                    break;}

            }
            push(result);
        }e++;
    }
    printf("postfix evaluation result %s=%d\n",postfix,pop());
    return 0;
}
