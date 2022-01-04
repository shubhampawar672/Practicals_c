//Exp 10
//shubham pawar ,20141236
//Implement circular linked list
#include <stdio.h>
#include <stdlib.h>
struct node{
int data;
struct node *next;
};
struct node *head=NULL;
void Insert_at_begining(int x)
{
    struct node *newnode=(struct node*)malloc(sizeof(struct node));
    newnode->data=x;
     if(head==NULL)
    {
       head=newnode;
        newnode->next=head;
    }
    else
    {
        struct node *temp=head;
        while(temp->next!=head)
        {

                 temp= temp->next;
        }
         newnode->next=head;
                head=newnode;
                temp->next=head;
}
}
void Insert_at_position(int x,int pos)
{
 struct node *newnode=(struct node*)malloc(sizeof(struct node));
 newnode->data=x;
      if(head==NULL)
    {
         head=newnode;
        newnode->next=head;
    }
     if(pos<1)
     {
         printf("\n position should be greater than 1");
     }
     else if(pos==1)
     {
       Insert_at_begining(newnode->data);
     }

     else
     {   struct node *temp=head;
         for(int i=2;i<=pos-1;i++)
         {
             temp=temp->next;
        }
        newnode->next=temp->next;
        temp->next=newnode;
        printf("\n node inserted  at position :%d",pos);

       }
}
void Insert_at_end(int x)
{
     struct node *newnode=(struct node*)malloc(sizeof(struct node));
     newnode->data=x;
     if(head==NULL)
     {
         head=newnode;
         newnode->next=head;
     }
     else
     {
         struct node *temp=head;
         while(temp->next!=head)
         {
             temp=temp->next;
         }
         temp->next=newnode;
         newnode->next=head;
     }

}
void delete_begining()
{
struct node *temp1=head,*temp2=head;
     if(head==NULL)
     {
         printf("list is empty:");
         return ;
     }

     else if(temp1->next==head)
     {

        head=NULL;
        printf("\n node deleted:");
        free( temp1);
             }
        else
        {
            while(temp1->next!=head)
            {
                 temp1=temp1->next;
                 }
            head=temp2->next;
                 temp1->next=head;
                 printf("\n node deleted:");

                 }
}
void delete_at_position(int pos)
{
    struct node *temp=head;
 if(pos<1)
     {
         printf("\n position should be greater than 1");
     }
     else if(temp->next==head)
     {
         head=NULL;
          printf("\n node deleted  at position :1");
     }
     else
     {   struct node *temp1=head,*temp2=NULL;
         int w=0;
         int d=pos-1;
         while(w!=d)
         {
             temp2=temp1;
             temp1=temp1->next;
             w++;
         }
         temp2->next=temp1->next;
         printf("\n node deleted  at position :%d",pos);
         free(temp1);

     }


}

void  delete_at_end()
{
    struct node *temp1=head,*temp2=NULL;
  if(head==NULL)
  {
      printf("deletion not possible...\n");
  }

  else if(temp1->next==head)
     {

        head=NULL;
        printf("\n node deleted:");
        free( temp1);
    }
else{

     while(temp1->next!=head)
     {
         temp2=temp1;
         temp1=temp1->next;
     }
     temp2->next=head;
      printf("\n node deleted:");
     free( temp1);
      }
}

void display()
{
    struct node *temp=head;
    if(head==NULL)
        printf("list is empty\n");

    else
    {
        while(temp->next!=head)
        {
            printf("%d ",temp->data);
            temp=temp->next;
        }
        printf("%d ",temp->data);
    }
}
 int Search(int key)
 {

     if(head->data==key)
        return 1;
     else
     {    struct node *curr=head;
         while(curr->next!=head)
     {
         if(curr->data==key)
            return 1;
         curr=curr->next;
    }
     }
     return 0;
 }

int main()
{
    int choice,x,pos;
    printf("\t\tM E N U (circular linked list)\n");
    printf(" 1.Insert node at beginning\n 2.Insert node at given position\n 3.Insert node at the end\n");
    printf(" 4.Delete node at the beginning\n 5.Delete node at the given position\n 6.Delete node at the end\n");
    printf(" 7.Display list\n 8.Search\n 9.exit");
while(1){
    printf("\n enter your choice");
    scanf("%d",&choice);
    switch(choice)
    {

    case 1:
        printf("\n enter data");
        scanf("%d",&x);
        Insert_at_begining(x);
        break;
    case 2:
          printf("\n enter data and position");
        scanf("%d %d",&x,&pos);
        Insert_at_position(x,pos);
        break;
    case 3:
          printf("enter data");
        scanf("%d",&x);
        Insert_at_end(x);
        break;
    case 4:
        delete_begining();
        break;
    case 5:
        printf("\n enter position ");
        scanf("%d",&pos);
        delete_at_position(pos);
        break;
    case 6:
        delete_at_end();
        break;
    case 7:
        display();
        break;
         case 8:
             printf("\nenter element to be searched ");
             scanf("%d",&x);
        if(Search(x))
            printf("element found\n");
        else
            printf("element not found \n");
        break;
    case 9:
        exit(0);
        break;
        default:

        printf("\nenter proper choice");
    }
        }

return 0;
}



