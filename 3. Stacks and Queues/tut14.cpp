//Following program for queue representation using linked list.
#include<stdio.h>
#include<process.h>
#include<stdlib.h>
struct Node
{
    int data;
    struct Node *next;

}*front = NULL,*rear=NULL;
void enqueue();
void dequeue();
void display();

int main()
{
    int choice;
    setbuf(stdout, NULL);
    printf("\n**** Queue using Linked List ****");
    printf("1. Insert \n2. Delete\n3. Display\n4. Exit\n");
     while(1)
     {
        printf("\n Enter your choice:(1. Insert 2. Delete 3. Display 4. Exit) ");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1 :
                enqueue();
                break;

            case 2 :
                dequeue();
                break;

            case 3 : 
                display();
                break;

            case 4 :
                exit(0);

                 default:
                 printf("Wrong choice!!!");


        }
     }

}

void enqueue()
{
    int value;
     printf("Enter the element to be insert: ");
     scanf("%d",&value);
     struct Node *temp;
      temp= (struct Node*)malloc(sizeof(struct Node));
      temp->data =value;
      temp-> next  = NULL;
       if (front== NULL)
       front= rear = temp;
        else{
            rear ->next = temp;
             rear = temp;
            
        }
   
}

void dequeue()
{
    if(front == NULL)
    printf("\nQueue is Empty!!!\n");
     else{
        struct Node *temp = front;
         front = front -> next;
         printf("\nDeleted element : %d\n",temp ->data);
         free(temp);

     }
}

void display()
{
    if (front == NULL) 
    printf("\nQueue is Empty!!!\n");
    else{
        struct Node *temp = front;
         while(temp ->next != NULL){
            printf("%d",temp ->data);
            temp = temp -> next;
             
         }
         printf("%d",temp->data);

    }
} 