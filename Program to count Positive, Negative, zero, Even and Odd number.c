#include <stdio.h>
#include <stdlib.h>

int main()
{
int a[100],n;
int i,positive=0,negative=0,zero=0;
int even=0,odd=0;
printf("Enter the no. of eements in the array:");
scanf("%d",&n);
printf("Enter %d elements :\n",n);
for(i=0;i<n;i++)
{
  scanf("%d",&a[i]);
}
for(i=0;i<n;i++)
{
  if(a[i]>0)
        positive++;
        else if(a[i]<0)
            negative++;
        else
            zero++;
            if(a[i]%2==0)
                even++;
                else
                    odd++;
}
printf("Total no.of elements: %d\n",n);
printf("Positive number: %d\n",positive);
printf("Negative number: %d\n",negative);
printf("Zero number: %d\n",zero);
printf("Even number: %d\n",even);
printf("Odd number: %d\n",odd);
return 0;
}
