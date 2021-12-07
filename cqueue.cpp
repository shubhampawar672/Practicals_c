#include<iostream>
using namespace std;
void Insert();
void Delete();
void Display();
int Q_arr[50];
int rear=-1,Front=-1;
int main(){

int choice;
while(1){

    cout<<"1.Insert element to queue"<<"\n";
    cout<<"2.Delete element from queue"<<"\n";
    cout<<"3.Display elements in queue"<<"\n";
    cout<<"4.Quit"<<"\n";
    cout<<"Enter your choice"<<"\n";
    cin>>choice;
    switch(choice){
case 1:
    Insert();
    break;
case 2:
    Delete();
    break;
case 3:
    Display();
    break;
case 4:
    exit(1);
default:
    cout<<"enter proper choice "<<"\n";
    }
    }
    }

    void Insert(){

    int add;
    if(rear==50-1)
        cout<<"Queue overflow"<<"\n";
    else{
        if(Front==-1)
            Front=0;
        cout<<"Add an element to queue"<<"\n";
        cin>>add;
        rear=rear+1;
        Q_arr[rear]=add;

    }

    }

    void Delete(){
    if(Front==-1||Front>rear){

        cout<<"queue underflow"<<"\n";
        return ;

    }
    else{

        cout<<"element deleted from queue"<<"\n";
        Front=Front +1;
    }


    }

    void Display(){

    int i;
    if(Front==-1)
        cout<<"queue is empty"<<"\n";
    else{

        cout<<"queue is :"<<"\n";
        for(i=Front;i<=rear;i++){
            cout<<Q_arr[i];
            cout<<"\n";
        }

    }

    }

