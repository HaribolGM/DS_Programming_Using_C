// Program to implement a queue using an array.

#include<stdio.h>
#include<process.h>
int main()
{
    int queue[5];
     int rear=0;
      setbuf(stdout, NULL);
      while(rear<=4)
      {
        printf("Enter Queue element: ");
        scanf("%d",&queue[rear]);
        rear++;

      }
      printf("\nElements of Queue: ");
      int front = 0;
       while(front<=4)
       {
        printf("%d\t",queue[front]);
        front++;
       }
       return 0;
}