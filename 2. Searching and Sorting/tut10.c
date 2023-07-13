//**** Program for radix/bucket sort. *****

#include <stdio.h>
#include <stdlib.h>
// This function gives maximum value in array[]
int getMax(int A[], int n)
{
   int i;
   int max = A[0];
   for (i = 1; i < n; i++)
   {
      if (A[i] > max)
         max = A[i];
   }
   return max;
}
// Main Radix Sort sort fucntion
void radixSort(int A[], int n)
{
   int i, digitPlace = 1;
   int result[n]; // resulting array
   // find the largest number to knwo number of digits
   int largestNum = getMax(A, n);
   // We run loop until we reach the largest digit place
   while (largestNum / digitPlace > 0)
   {
      int count[10] = {0};
      for (i = 0; i < n; i++) 
         count[(A[i] / digitPlace) % 10]++;
      for (i = 1; i < 10; i++)
         count[i] += count[i - 1];
      for (i = n - 1; i >= 0; i--)
      {
         result[count[(A[i] / digitPlace) % 10] - 1] = A[i];
         count[(A[i] / digitPlace) % 10]--;
      }
      for (i = 0; i < n; i++)
         A[i] = result[i];
      digitPlace *= 10;
   }
}
int main()
{
   int arr[20], n, i;
   setbuf(stdout, NULL);
   printf("Enter size of Array : ");
   scanf("%d", &n);
   printf("\n Enter %d element : \n \n ", n);
   for (i = 0; i < n; i++)
   {
      printf("Array[%d] =", i);
      scanf("%d", &arr[i]);
   }
   radixSort(arr, n);
   printf("\n The Sorted Array is: \n \n");
   for (i = 0; i < n; i++)
   {
      printf("%4d", arr[i]);
   }
   return 0;
}