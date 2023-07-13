// *** Program for PUSH operation in stack. *** 
// due to some reason code stucks at second execution level 


#include<stdio.h>
#define  MAX 5 // Maximum number of element that can be stored
int main()
{
    int top = -1, stack[MAX],val,i;
    char ch;
    setbuf(stdout, NULL); // Turn off buffering of stdout
    // code for Push 
    do
    {
      if (top==MAX-1) 
            printf("\n Stack is full!!! ");
            else 
            {
                printf("\n Enter element to push : ");
                scanf("%d",&val);
                top = top+1;
                stack[top]=val; // element inserted in stack at top

            } 
                printf(" Do you want to insert more elements? : ");
                scanf(" %c ",&ch); // use a space before %c to clear stdin
                  
      
 
      } while (ch=='y'||ch=='Y');
      // code for display
     printf("\n********** Element in Stack **********.\n");
     for ( i = top; i >= 0; i--)
     printf("%d \n", stack[i]);

      

    }     
 