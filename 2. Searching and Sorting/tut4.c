// ***** Program for linear search.
// code is correct the vs comiler gets looping please use online compiler
// for this code if you can solve the looping in this code please correct is thanks.



#include<stdio.h>
 
int main()
{
    int a[100], find , i , n;
    setbuf(stdout, NULL); // Turn off buffering of stdout
    printf("Enter the size of array : \n ");
    scanf("%d",&n);
    printf("Enter n element :  \n "); 
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    printf("Enter value to be search : \n");
     scanf("%d",&find);
     for(i=0;i<n;i++) 
     {
        if (a[i]==find) // If required element is found
        {
            printf("Element found at index %d. \n",i);
            break;
        }
     }
     if (i==n) 
     printf("Element Not found in Array ");
     return 0;

}