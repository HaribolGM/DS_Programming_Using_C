#include<stdio.h>
#include<process.h>
#define MAX 100 // Maximum number of elements that can be stored 
int num=0,a[MAX];
void create();
void insert();
void delete();
void display();
int main()
{
    int ch;
    setbuf(stdout , NULL); // Turn off buffering of stdout 
    printf("\n.1.Create\n2.Insert\n3.delete\n4.Display\n5.Exit");
    while(1) //infinte loop

    {
        printf("\n Enter your choice (1.Create 2.Insert 3.Delete 4.Display 5.Exit):\n");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1: create();
                    break;
            case 2: insert();
                    break;
            case 3: delete();
                    break;
            case 4: display();
                    break;
            case 5: exit(0);
            
            default : printf("\nWrong Choice !!");
            
        }
    }
    
    return 0;
    
    
    
}



void create()
{
    int i;
    printf("Enter the value of n:\n");
    scanf("%d",&num);
    
    printf("Enter n element : \n");
    for(i=0;i<num;i++)
    scanf("%d",&a[i]);
    
}

void insert()
{
    int i, index, element;
    printf("Enter the element to be inserted  : \n");
    scanf("%d",&element);
    printf("Enter the index after which element to be inserted  : \n");
    scanf("%d",&index);
    // Make space at the spcified location
    for (i=num-1;i>=index;i--)
    {
        a[i+1]= a[i];
    }
num++; // No of elements increased by 1 
a[index] = element;

}

void delete()

{
    int i,index;
    printf("Enter the element to be deleted  : \n ");
    scanf("%d",&index);
    for(i=index+1;i<=num-1;i++)
{
    a[i-1]=a[i];

}
num--; // No of element reduced by 1

}

void display()
{
    int i;
    printf("**** Element in Array ********. \n");
    for(i=0;i<num;i++)
    printf("%d",a[i]);
}