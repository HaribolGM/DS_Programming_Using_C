// *** Program for POP operation in stack. ***

#include<stdio.h>
#define MAX 5 // Maximum number of element  that can be stored
int main ()
{
    int top=MAX-1;
    int stack[MAX] = {10,20,30,40,50};
    char ch;
    setbuf(stdout, NULL); // turn off buffering of stdout
    int i;
    // code for display
    printf("\n**** Element in Stack*****.\n");
for(i=top;i>=0;i--)
printf("%d\n",stack[i]);
// code for Pop
printf("\n Do you want to delete element?");
scanf(" %c ",&ch); // use a space before %c to clear stdin
while (ch=='y' || ch=='Y')
{
    if (top==-1)
    {
        printf("\n Stack is Empty !!");
        return 0;

    }
    else
    {
        printf("\n Deleted element is %d", stack[top]); // element at top is deleted
        top=top-1;

    
    }

printf("\n Do you want to delete element?");
scanf(" %c ",&ch); // use a space before %c to clear stdin



}
// code for display
printf("\n ****Element is Stack**** .\n");
for(i=top;i>=0;i--)
printf("%d\n",stack[i]);



} 