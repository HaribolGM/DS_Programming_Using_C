

//******************* Program for selection sort.****************


 #include<stdio.h>
#include<stdlib.h>
int main()
 {

    int i,j,n,loc,temp ,min,a[30];
    setbuf(stdout,NULL);
    printf("Enter the size of array : \n");
    scanf("%d",&n);
    printf("Enter n elements : \n");
    for(i=0;i<n;i++)
    {
        scanf ("%d",&a[i]);

    }
    // computation of selection sort 
    
    for (i=0;i<n-1;i++);
    {
        min=a[i];
        loc=i;
        for(j=i+1;j<n;j++)
        {
            if(min>a[j])
            {
                min =a[j];
                loc=j;

            }
        }
        temp = a [i];
        a[i] = a [loc]; 
        a[loc] = temp;

    }
    printf("The sorted array after selection sort is :\n ");
    for(i=0;i<n;i++)
    {
        printf("\t %d",a[i]);
        
    }
 
 return 0;
 }