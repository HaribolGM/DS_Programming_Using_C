// **** Program for linked list representation of stack. ****
// Code is running but there is small error during displaying ....


#include<stdio.h>
#include<conio.h>
#include<process.h>
#include<stdlib.h>
 
struct Node
{ 
    int data;
    struct Node *next;
}*top = NULL;
void push();
void pop();
void display();
int main()
{
    int choice;
     setbuf(stdout, NULL); // Turn off buffering of stdout
     printf("\n ***Stack using Linked List***\n");
     printf("1.Push\n2.Pop\n3.Display\n4.Exit\n");
     while(1)
     {
        printf("\n Enter your choice:(1.Push 2.Pop 3.Display 4.Exit)");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1: 
                    push();
                    break;
            case 2: 
                    pop();
                    break;
            case 3: 
                    display();
                    break;
            case 4: 
                    exit(0);
                 
                 default :  
                        printf("Wrong choice!!!");

                    
        }
     }
    return 0;
}
void push()
{
    int val;
    printf("\nEnter the element to be insert : ");
    scanf("%d",&val);
     struct Node *temp;
      temp = (struct Node*)malloc(sizeof(struct Node));
       temp->data == val;
       if (top == NULL)
        temp->next = NULL;
        else 
        temp->next = top;
         top = temp;

}
void pop()
{
    if(top == NULL)
    printf("\n Stack is Empty!!! \n");
     
     else {
        struct Node *temp = top;
        printf("\n Deleted element : %d",temp->data);
        top = temp->next;
        free(temp);
        
             }
} 

void display()
{
    if (top == NULL)
    printf("\nStack is Empy!!!\n");

    else {
        struct Node *temp = top;
        while(temp->next != NULL)
        {
            printf("%d",temp->data);
            temp = temp->next;

        }
            printf("%d",temp->data);

    }

}

