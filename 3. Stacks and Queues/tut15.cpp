// C program for enqueue operation in queue.
 
 #include <stdio.h>
 #include <stdlib.h>
 #define MAX  5
 int main()
 {
    int i,queue[MAX],front=-1,rear=-1;
    char ch;
     setbuf(stdout,NULL);
     do
     {
        printf("\nBefore Insertion Front %d and Rear %d positions",front,rear);
        if(rear==MAX -1)
        {
            printf("\nQueue is Fulll!!");
            break;
        }
        else
        {
            if (front== -1)
            front =0;
             rear++; 
              printf("\n Enter element to Insert:");
               scanf("%d",&queue[rear]);

        }

        printf("\nAfter Insertion Front %d and Rear %d positions",front,rear);
        printf("\nDo you want  to insert more elements?");
        scanf(" %c",&ch);

     }while(ch=='y'||ch=='Y');
     printf("\n***** Elements in Queue *****\n");
     for(i=front; i<=rear; i++) 
     printf("\t%d",queue[i]);
     return 0;

 }
  