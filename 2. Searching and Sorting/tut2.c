// ******************  Program for deletion of an element in array. ****************

#include<stdio.h>
#include<process.h>
#define MAX 100 // Maximum number of element that can be stored
int main()
{
    int size=5,i,index;
    int a[5]={10, 20, 30, 40, 50}; 
    setbuf (stdout ,NULL);   // Turn off buffering of stdout
    printf("***** Element in Array before deletion ****.\n");
    for(i=0;i<size; i++)
    printf("%d",a[i]);
    printf("\nEnter index of the element to be deletation : \n");

    scanf("%d",&index);
    if(index<0|| index>size-1)
    { 
        printf("invalid position");
        return 0;

    }
    for (i = index+1; i<=size-1; i++)
    {
        a[i-1] = a[i];

    }

    size--; // No of element reduced by 1 
    printf("**** Element in Array after deletion***** \n");
    for(i=0;i<size;i++)
    printf("%d",a[i]);
     
}