// *** Program for conversation of infix to prefix expression ***
// error occuring giving expression to the command )( , while removing ')( '  this , then also while running the program 
// it shows .... 





#define SIZE 50 /* Size of Stack*/
#include<string.h>
#include<ctype.h>
#include<stdio.h>

char s[SIZE];
 int top = -1; /* Global declarations*/
 
 void push(char elem)
 {
    s[++top]=elem;

 }
 char pop()
 {
    return((s[top--]));

 }
 int pr(char elem)
 {
    switch(elem)
    {
        case '#' : return 0;
        case ')' : return 1;
        case '+' :
        case '-' : return 2;
        case '*' :
        case '/' : return 3;

    }
 }
 int main()
 {
     /*   Main program    */ 


     setbuf(stdout , NULL ); // turn off buffering of stdout
     char infx[50],prefx[50],ch,elem;
     int i = 0, k=0;
     printf("\n\n Enter Infix Expression :");
     scanf("%s",infx);
     push('#');
      strrev (infx);
      while( (ch=infx[i++]) != '\0')
      {
        if (ch == ')') push (ch);
        else
        if(ch == ')')
        {
            while (s[top] != ')')
            prefx[k++] = pop();
            elem = pop(); /* Remove ) */

        }
        else 
        {
            /*Operator*/

            while (pr(s[top]) >= pr(ch))
            prefx[k++]=pop();
            push(ch);

        }

      }
      while(s[top] != '#') /* pop form stack till empty */ 
            prefx[k++]=pop();
            prefx[k]='\0'; // Make prfx as valid string 
            strrev(prefx);
            printf("\n\nPrefix Expression : %s\n",prefx);
            return 0;     
 }