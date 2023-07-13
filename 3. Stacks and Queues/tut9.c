// **** Program for evaluation of prefix expression.

#include<stdio.h>
#include<ctype.h>
#include<string.h>

int stack [20];
 int top = -1;
 void push(int x)
 {
    stack[++top] = x;
 
 }
 int pop()
 {
    return stack[top--];
     }

     int main()
 
    {
        char exp[20],revexp[20];
        setbuf(stdout, NULL); //turn off buffering stdout
        char *temp=NULL;
        int n1,n2,n3,num;
        printf("Enter prefixn expression without space :: ");
        scanf("%s",exp);
        strcpy(revexp,strrev(exp)); // convert prefix to postfix

        temp = revexp;
        while(*temp != '\0')
        {
            if(isdigit(*temp))
            {
                num = *temp - 48; // convert exp.string to integer
                push(num);

            }
            else {
                n1 = pop();
                n2 = pop ();
                switch(*temp)
                {

          case '+':
            {n3 = n2 + n1;
            break; 
            }

         case '-': 
            {n3 = n2 - n1;
            break;
            }

        case '*':
            {n3 = n2 * n1;
            break;
            }

        case '/':
            {n3 = n2 / n1;
            break;
            }

                }
                push(n3);
                }
                temp++;
            }
            printf("\n The result of prefix expression %s = %d\n\n",exp,pop());
             return 0;
        }            
     
    