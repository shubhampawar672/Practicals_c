//program for conversion of prefix to infix
#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>
# define MAX 30
char stack[MAX];
int top=-1;
void push(char x)
{
   stack[++top]=x;
}
char pop()
{
   return stack[top--];
}
void pretoin()
{  char str[MAX];
   int n,i;
   char a,b,op;
   printf("Enter the prefix expression\n");
   gets(str);
   n=strlen(str);
   printf("Infix expression is:\t");
   for(i=0;i<n;i++)
   {
      if(str[i]=='+'||str[i]=='-'||str[i]=='*'||str[i]=='/')
      {
         push(str[i]);
      }
      else
      {
         op=pop();
         a=str[i];
         printf("%c%c",a,op);
      }
   }
   printf("%c",str[top--]);
}
void main()
{
    pretoin();
}
