#include<stdio.h>
#include<conio.h>
int arr[10];
int top=-1;
void push()
{
int data;
if(top==9){
    printf("stack overflow. \n");

}
else
{
    printf("enter value \n");
    scanf("%d",&data);
    top++;
    arr[top]=data;
}


}
void pop()
{
if(top==-1){
    printf("stack underflow \n");

}
else{
     printf("pooped element is:");
    printf("%d\n",arr[top]);
     top--;
}
}
int peek()
{
    if(top==-1){
        printf("underflow\n");
        return 0;

    }
    else
        return arr[top];

}
void display()
{

    for(int i=top;i>=0;i--){
        printf("%d\n",arr[i]);
    }
    if(top==-1){

        printf("stack underflow");
    }
}
void main(){
int choice=0;
while(choice!=5)
{
    printf("choose operation to perform on stack\n");
    printf("1.push\n 2.pop \n 3.display \n 4. peek \n 5. Exit");
    printf("\n Enter your choice\n");
    scanf("%d",&choice);
    switch(choice){

    case 1:{

    push();
    break;
    }
    case 2:
        {
            pop();
            break;

        }
    case 3:
        {
            display();
            break;
        }
    case 4:  {
                printf("%d\n",peek());
              break;

        }
    case 5 :
            {
                printf("Exiting....");
                break;

            }
    default:{

            printf("Enter valid choice.\n");

            }
            }
}
}
