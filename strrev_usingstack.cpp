//program to reverse the given string using stack
#include<iostream>
#include<cstring>

using namespace std;
int top=-1;
char Stack[50];
void push(char x){

if(top==49)
   {

    cout<<"stack overflow";
    return;}
else
    Stack[++top]=x;
}
void pop(){
if(top==-1){
    cout<<"stack underflow";
    return;
}
cout<<Stack[top--];
}
int main()
{
    char str[10];
    for(int j=0;j<10;j++){
        cin>>str[j];
    }
    int len=strlen(str),i;
    for(i=0;i<len;i++){

        push(str[i]);
    }
     for(i=0;i<len;i++){
        pop();}
        return 0;

}
