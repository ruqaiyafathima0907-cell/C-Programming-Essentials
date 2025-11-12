#include <stdio.h>
#include <stdlib.h>

void inputArray(int *arr, int n);
void displayArray(int *arr, int n);
int sumArray(int *arr, int n);
int countPositive(int *arr, int n);
int countNegative(int *arr, int n);
int main(){
int arr[100];
int n,sum,posCount,negCount;
printf("Enter the number of elements in th array");
       scanf("%d",&n);

inputArray(arr,n);
//display array elements
printf("\nArray elemeents are:");
       displayArray(arr,n);
sum = sumArray(arr, n);
printf("\nSum of all elements = %d", sum);

posCount = countPositive(arr, n);
negCount = countNegative(arr, n);

printf("\nNumber of positive elements = %d", posCount);
printf("\nNumber of negative elements = %d\n", negCount);

return 0;
}

/* Read n integers into array via pointer arithmetic */
void inputArray(int *arr, int n) {
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", arr + i);
    }
}

void displayArray(int *arr, int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", *(arr + i));
    }
}



//FUNCTION TO CALCULATE SUM OF ARRAY ELEMENTS
       int sumArray(int*arr,int n)
       {
           int sum=0;
           for(int i =0;i<n;i++)
           {
               sum+=*(arr+i);
           }
           return sum;
       }
       /*count positives(>0)*/
       int countPositive(int *arr,int n)
       {
           int cnt=0;
           for (int i=0;i<n;i++)
           {
               if(*(arr+i)>0)cnt++;
           }
           return cnt;
       }
       int countNegative(int *arr,int n)
       {
           int cnt=0;
           for(int i=0;i<n;i++)
           {
                if(*(arr+i)<0)cnt++;
           }
           return cnt;

           }
