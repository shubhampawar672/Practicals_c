//To check if the parenthesis are balanced or not in given expression
#include<iostream>
#include<cstring>
using namespace std;
int top=-1;
char stack[50];
void push(char x){
top=top+1;
stack[top]=x;

}
void pop(char t){
if(t=='}'){
    if(stack[top]=='{')
    top=top-1;
    }
    else if(t==')'){
        if(stack[top]=='(')
            top=top-1;
    }
    else if(t==']'){
        if(stack[top]=='[')
            top=top-1;

    }
}
void display(){
if(top==-1){
    cout<<"balanced";
}
else{
    cout<<"not balanced"<<"   "<<"unbalanced paranthisis is:"<<endl;
    for(int i=0;i<=top;i++){
            char temp=stack[i];
        cout<<temp;}
        }
}
int main(){
char exp[30];
char x,t;
cin>>exp;
int k=strlen(exp);
for(int i=0;i<k;i++){
    if(exp[i]=='{'||exp[i]=='('||exp[i]=='['){
        x=exp[i];
        push(x);
       }
       else if(exp[i]=='}'||exp[i]==')'||exp[i]==']'){
        t=exp[i];
        pop(t);
       }
}
display();
return 0;
}
