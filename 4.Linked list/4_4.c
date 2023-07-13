// 4.4 Program to insert node at the beginning of linked list. 


#include<stdio.h>
#include<malloc.h>
#include<process.h>

struct node
{
    int info;
     struct node *link;
      
}*start=NULL;
 int main()
 {
    char ch;
    int data;
    setbuf(stdout, NULL);
     struct node *q, *tmp;
     do 
     {
        printf("\n Enter the element to be inserted : \n ");
         scanf("%d",&data);
         tmp=malloc(sizeof(struct node));
         tmp->info=data;
         tmp->link=start;
         start=tmp;
         printf("Do you want to insert more elements ? ");
          scanf(" %c", &ch );  // use a space beofore %c to clear stdin

     }while(ch=='y'||ch=='Y');
      printf("***** Elements in Linked List  ******\n");
       q= start;
       while(q!=NULL)
       {
        printf("%d\t",q->info);
        q=q->link;



       }

       return 0;

 }