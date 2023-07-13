// **** Program for array representation of stack *******

#include<stdio.h>
#include<stdlib.h>
#include<process.h>
#define MAX 5 // Maximum number of elements that can be stored
int top= -1, stack[MAX];
void push();
void pop();
void display();
int main()
{
    int ch;
    setbuf(stdout, NULL) ; // turn off buffering of stdout
    printf("\n***  Stack Menu  ***");
    printf("\n1.Push\n2.Pop\n3.Display\n4.Exit");
    while(1) // infinite loop
    {
        printf("\n Enter your choice(1-4) : ");
        scanf("%d",&ch);
        
        switch(ch)
        {
            case 1: push(); 
                    break;
            case 2: pop(); 
                    break; 
            case 3: display(); 
                    break;
            case 4: exit(0); 

             default : printf("\n Wrong Choice!!");

                   

        }
    }

    return 0;
}




void push()
{
    int val;
    if(top==MAX-1)
    printf("\nStack is full!!");
     else
     {
        printf("\n Enter element to push :");
        scanf("%d",&val);
        top=top+1;
        stack[top]=val;  // element inserted in stack at top position

     }
}



void pop()
{
    if (top==-1)
    printf("\n Stack is Empty !! "); 
    else
    {
        printf("\n Deleted element is %d" , stack [top]); // delete top element
         top=top-1;
    }
}

void display()
{
    int i;
     if(top==-1)
     printf("\n Stackis Empty!!");
      else 
      {
        printf("\n **** Elements in Stack ****.\n");
        for(i=top;i>0;i--)
        printf("%d \n",stack[i]);
      }
}