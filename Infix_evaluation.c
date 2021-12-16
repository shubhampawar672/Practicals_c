//To evaluate infix expression
#include<stdio.h>
#include<conio.h>
#include<ctype.h>
#include<string.h>
int num[30],tn=-1,to=-1;
char op[30];
void push_num(int n)
{
    num[++tn]=n;
}
void push_op(char x)
{
    op[++to]=x;
}
int pop_num()
{
    return num[tn--];
}
char pop_op()
{
    return op[to--];
}
int infix_eval(int num[30],char op[30])
{
    int x;
    int y;
    char opr;
    x=pop_num();
    y=pop_num();
    opr=pop_op();
    switch(opr)
    {
   case '+':
    return x+y;

   case '-':
    return y-x;

    case '*':
    return x*y;

    case '/':
        if(x==0)
        {
            printf("can't divide by zero\n");
            exit(0);

                    }
                    else
                    return y/x;

    }
    return 0;

}
int isoprator(char c)
{
    return (c=='+'||c=='-'||c=='*'||c=='/'||c=='^');
}
int precedence(char c)
{
    if(c=='+'||c=='-')
        return 1;
    else if(c=='*'||c=='/')
        return 2;
    else if(c=='^')
        return 3;
     return -1;
}
int evaluate(char exp[30])
{
    int i,outp,result;
    char ch;
    int l=strlen(exp)-1;
    for(i=0;i<=l;i++)
    {
        ch=exp[i];
        if(isdigit(ch))

           push_num(ch-'0');

        else if(ch=='(')
        {
            push_op(ch);
        }
        else if(ch==')')
        {
            while(op[to]!='(')
            {
                result=infix_eval(num,op);
                push_num(result);
            }
            pop_op();
        }
        else if(isoprator(ch))
        {
            while(to!=-1 && precedence(ch)<=precedence(op[to]))
            {
                outp=infix_eval(num,op);
                push_num(outp);
            }
            push_op(ch);
        }
    }
    while(to!=-1)
    {
         outp=infix_eval(num,op);
          push_num(outp);
    }

           return pop_num();

}
void main()
{
    char exp[30];
    printf("enter infix expression:\n");
    gets(exp);
    printf("%d",evaluate(exp));
}


