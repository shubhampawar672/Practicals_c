//Exp 11
//shubham pawar ,20141236
//reverse doubly linked list
#include <stdio.h>
#include <stdlib.h>
struct node {
    int data;
    struct node * prev;
    struct node * next;
}*head=NULL, *last=NULL;
void createList(int n);
void display();
void reverseList();


int main()
{
    int n, data, choice;
    while(choice != 4)
    {  printf("1. Create List\n");
        printf("2. Reverse List\n");
        printf("3. Display list\n");
        printf("4. Exit\n");
        printf("Enter your choice : ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                printf("Enter the total number of nodes in list: ");
                scanf("%d", &n);
                createList(n);
                break;
            case 2:
                reverseList();
                break;
            case 3:
                display();
                break;
            case 4:
                exit(0);
                break;
            default:
                printf("Invalid choice......");
        }
}    return 0;
}

void createList(int n)
{
    int i, data;
    struct node *newNode;

    if(n >= 1)
    {

        head = (struct node *)malloc(sizeof(struct node));

        printf("Enter data of 1 node: ");
        scanf("%d", &data);

        head->data = data;
        head->prev = NULL;
        head->next = NULL;

        last = head;
        for(i=2; i<=n; i++)
        {
            newNode = (struct node *)malloc(sizeof(struct node));
            printf("Enter data of %d node: ", i);
            scanf("%d", &data);

            newNode->data = data;
            newNode->prev = last;
            newNode->next = NULL;

            last->next = newNode;
            last = newNode;
        }
    }
}

void display()
{
    struct node * temp;
  if(head == NULL)
    {
        printf("List is empty.\n");
    }
    else
    {
        temp = head;
        printf("Data in list:\n");
    while(temp != NULL)
        {
            printf("%d  ",  temp->data);
            temp = temp->next;
        }
    }
}
void reverseList()
{
    struct node *current, *temp;

    current = head;
    while(current != NULL)
    {
        temp = current->next;
        current->next = current->prev;
        current->prev = temp;
        current = temp;
    }
   temp = head;
    head = last;
    last = temp;
}
