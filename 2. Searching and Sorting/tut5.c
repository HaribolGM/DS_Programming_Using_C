// ***** Program for binary search.

#include<stdio.h>
 
int main()
{
    int first , last , middle , a[100], find , i , n;
    setbuf(stdout, NULL); // Turn off buffering of stdout
    printf("Enter the size of array : \n ");
    scanf("%d",&n);

    printf("Enter n element in Ascending order :  \n "); 
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    printf("Enter value to be search : \n");
     scanf("%d",&find);
        first=0;
        last = n-1;
        middle=(first+last)/2;
         while (first <=last)
         {
            if (a[middle]<find)
            first=middle +1;
            else if (a [middle]==find)
            {
                printf("Element found at index %d. \n",middle);
                break;

            }
            else last  = middle -1;
             middle=(first+last)/2;
         }
         if (first > last)
         printf("Element Not found in the list.");
          return 0;

 



  

}