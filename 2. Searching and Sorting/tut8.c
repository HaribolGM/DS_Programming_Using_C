
// ********* The sorted array after Insertion sort is : *****************


#include<stdio.h>
#include<stdlib.h>
int main()
{
    int i,j,n,temp,a[30];
    setbuf(stdout, NULL);
    printf("Enter the size of array  : \n");
    scanf("%d",&n);
    printf("Enter n element  : \n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);

    } 

// computation of insertion sort 
for(i=1;i<=n-1;i++)
{
    temp = a[i];
    j=i-1;
    while((temp<a[j])&&(j>=0))
    {
        a[j+1]=a[j]; // moves element forward
        j=j-1;
        
    }
        a[j+1] = temp; // insert element in proper place

    
}
printf("The sorted array after Inseratoin sort is : \n");
for (i=0;i<n;i++)
{
    printf("\t %d",a[i]);

}
return 0; 


}