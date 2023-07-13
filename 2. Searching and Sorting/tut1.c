

// *************** Program for insertion of an element in array. **************


#include<stdio.h>   
#include<process.h>
#define MAX 100 // Maximum numer of elements that can be stored 
int main(){

int size=0, a[MAX] ;  
setbuf(stdout, NULL); // Turn off buffering of stdout 
int i , element ,index;
printf("Enter n value of n: \n");
scanf("%d",&size);
// Code for creation of Array
printf("Enter n element : \n ");
for(i =0 ; i <size; i++)
scanf("%d", &a[i]);
// Code for displaying elements of Array 
printf("\n**** Element in Array before Insertion*****.\n");
for(i=0;i<size;i++)
printf("%d",a[i]);
 // Code for insertion in Array 
 printf("\nEnter the element to be inserted : \n");
  scanf("%d",&element);
  printf("Enter the index where element to be inserted : \n");
  scanf("%d",&index);
  if(index<0 || index>size-1)
  {
    printf("Invalid index\n");
    return 0;
  }
  else {

    // Make space at the spcified location 
    for(i=size-1; i>=index ; i--)
    {
        a[i+1]= a[i];

    }
size++ ; // No of elements increased by 1 
a[index]= element;

  }
  printf("**** Elements in Array after Insertion ****. \n");
  for(i=0;i<size;i++)
  printf("%d",a[i]);
  return 0;  
  } 