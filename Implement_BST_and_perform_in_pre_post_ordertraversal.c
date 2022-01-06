//Exp 12
//shubham pawar,20141236
//: Implement of binary search tree and perform recursive  in order, pre order and post order traversals.
#include <stdio.h>
#include <stdlib.h>
struct node{
int data;
struct node *left,*right;
};
struct node *root=NULL;

struct node *creatnode(int data)
{
    struct node *newnode=(struct node *)malloc(sizeof(struct node));
    newnode->data=data;
    newnode->left=NULL;
    newnode->right=NULL;
    return (newnode);

}
void Insert(struct node **Node,int data)
{
    if(!*Node)
    {
        *Node=creatnode(data);
    }
    else if(data<(*Node)->data)
    {
        Insert(&(*Node)->left,data);
    }
    else
    {
        Insert(&(*Node)->right,data);
    }
}
void inorder(struct node *Node)
{
    if(Node)
    {
        inorder(Node->left);
        printf("%d ",Node->data);
        inorder(Node->right);
    }
    return;
}
void preorder(struct node *Node)
{
    if(Node)
    {   printf("%d ",Node->data);
        preorder(Node->left);

        preorder(Node->right);
    }
    return;
}
void postorder(struct node *Node)
{
    if(Node)
    {

        postorder(Node->left);

        postorder(Node->right);
        printf("%d  ",Node->data);

    }
    return;
}



int main()
{
     int data,ch=0;
      printf("\t\t MENU\n");
     printf("1.insert \n2.preorder \n3.postorder \n4.inorder \n5.exit\n");
     while(ch!=5)
     {
     printf("\nEnter your choice \n");
     scanf("%d",&ch);
     switch(ch)
     {
       case 1:
        printf("Enter your data:");
        scanf("%d",&data);
        Insert(&root,data);
        break;
       case 2:
        preorder(root);
        break;
       case 3:
        postorder(root);
        break;
       case 4:
        inorder(root);
        break;
       case 5:
        exit(0);
        break;
       default:
        printf("Enter proper choice \n");
     }
     }
    return 0;
}
