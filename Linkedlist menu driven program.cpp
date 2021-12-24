//to implement singly linked list
#include<iostream>
using namespace std;

 struct node{

 int data;
 struct node *next;

 };
 struct node *head=NULL;

 void Insert_bigining(int x)
 {   struct node *new_node= new (struct node);
    new_node->data=x;
    if(head==NULL)
    {

     new_node->next=NULL;
     head=new_node;
     cout<<" first node inserted\n";
    }
    else
    {
      new_node->next=head;
       head=new_node;
        cout<<"\n node inserted at bigining\n";
    }

 }
 void Insert_position(int x,int pos)
 {

     struct node *new_node= new (struct node);
     new_node->data=x;
     new_node->next=NULL;
     if(pos<1)
     {
         cout<<"\n position should be greater than 1\n";
     }
     else if(pos==1)
     {
         new_node->next=head;
         head=new_node;
          cout<<"\n node inserted  at position :"<<pos<<endl;
     }
     else
     {   struct node *temp=head;
         for(int i=1;i<pos-1;i++)
         {
             if(temp!=NULL)
             {
                 temp=temp->next;
             }
         }

     if(temp!=NULL)
     {
         new_node->next=temp->next;
         temp->next=new_node;
        cout<<"\n node inserted  at position :"<<pos<<endl;
     }
     else
     {
         cout<<"\n no such position in the list..\n";
     }

     }

 }
 void Insert_end(int x)
 {
      struct node *new_node= new (struct node);
     new_node->data=x;
     new_node->next=NULL;
      struct node *temp=head;
      while(temp->next!=NULL)
      {
          temp=temp->next;
      }
      temp->next=new_node;


 }
 void Delete_bigining()
 { struct node *temp=head;
     if(head==NULL)
     {
         cout<<"list is empty:\n";
         return ;
     }

     else if(temp->next==NULL)
     {

        head=NULL;
        cout<<"node deleted:\n";     }
        else
        {

            head=temp->next;
             cout<<"node deleted:\n";

        }
 }
 void Delete_pos(int pos)
 {
     if(pos<1)
     {
         cout<<"\n position should be greater than 1\n";
     }
     else if(pos==1)
     {
         //new_node->next=head;
         head=NULL;
          cout<<"\n node deleted  at position :"<<pos<<endl;
     }
     else
     {   struct node *temp=head;
         for(int i=1;i<pos-1;i++)
         {
             if(temp!=NULL)
             {
                 temp=temp->next;
             }
         }

     if(temp!=NULL)
     {
        // new_node->next=temp->next;
         temp->next=NULL;
        cout<<"\n node  deleted  at position :"<<pos<<endl;
     }
     else
     {
         cout<<"\n no such position in the list..\n";
     }

     }
 }
 void Delete_end()
 {
     struct node *temp=head;
     while(temp->next->next!=NULL)
     {
         temp=temp->next;
     } temp->next=NULL;
  }


 void display()
 {
     struct node *ptr =head;
      if(head==NULL)
     {
         cout<<"list is empty!!!\n";
         return ;
     }

    else
    {  cout<<"Displaying list...\n";
        while(ptr!=NULL)
     {
         cout<<ptr->data<<" ";
         ptr=ptr->next;
     }
    }

 }
 bool Search(int key)
 {
     struct node *curr=head;
     while(curr!=NULL)
     {
         if(curr->data==key)
            return true;
         curr=curr->next;


     }
     return false;
 }
 int main()
 {

   cout<<"        Menu     \n";
   cout<<"1.insert at beginning \n 2.insert at given position \n 3.insert at end \n 4.Display list \n 5.Delete at beginning \n 6.Delete at end \n";
   cout<<"7.Delete at given position \n 8.Search a key\n";
   int choice;
   char c;
   do
   {  cout<<"enter choice..\n";
   cin>>choice;
       switch(choice)
       {
       case 1:
           int x;
           cout<<"enter data to be inserted\n";
           cin>>x;
           Insert_bigining(x);
           break;
       case 2:
           int t,po;
           cout<<"enter data to be inserted and position \n";
           cin>>t>>po;
           Insert_position(t,po);
           break;
       case 3:
           int n;
           cout<<"enter data to be inserted\n";
           cin>>n;
           Insert_end(n);
           break;
       case 4:
        display();
        break;
       case 5:
        Delete_bigining();
        break;
       case 6:
        Delete_end();
        break;
       case 7:
        int pos;
        cout<<"enter position at which data is to be deleted\n";
        cin>>pos;
        Delete_pos(pos);
        break;
       case 8:
           int key;
        cout<<"enter key to be searched\n";
        cin>>key;
        if(Search(key))
            cout<<"key found\n";
        else
            cout<<"key not found \n";
        break;
       default:
        cout<<"enter proper choice..\n";
    }
       cout<<"\n do you want to continue:\n";
       cin>>c;
   }while(c=='y'||c=='Y');

         return 0;
 }
