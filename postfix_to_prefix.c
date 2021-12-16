//To convert postfix to prefix
#include<stdio.h>
#include<string.h>
char stack[20];
int top=-1;
void push(char x)
{
   stack[++top]=x;
}
char pop()
{
   return stack[top--];
}
void post_to_pre()
{
   int n,i,j=0;
   char c[20];
   char str[20];
   printf("Enter the postfix expression\n");
   gets(str);
   n=strlen(str)-1;
   printf("Prefix expression is:\t");
   for(i=n;i>=0;i--)
   {
      if(str[i]=='+'||str[i]=='-'||str[i]=='*'||str[i]=='/'||str[i]=='^')
      {
         push(str[i]);
      }
      else
      { c[j++]=str[i];
        while((top!=-1)&&(stack[top]=='@'))
        {     pop();
             c[j++]=pop();
        }
        push('@');
      }
   }
   c[j]='\0';
   strrev(c);
   puts(c);
}
 int main()
{
    post_to_pre();
    return 0;
}
