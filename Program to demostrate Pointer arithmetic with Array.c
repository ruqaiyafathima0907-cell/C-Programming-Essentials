#include <stdio.h>
#include <stdlib.h>

int main()
{
int a[]={5 , 10 , 15 , 20 , 25};
int *ptr=a;
printf("ptr=%p, *ptr=%d\n",ptr,*ptr);
ptr++;
printf("After ptr++:ptr=%p,*ptr=%d\n",ptr,*ptr);
ptr+=2;
printf("after ptr+=2:ptr=%p\n , *ptr=%d/n",ptr,*ptr);
return 0;
}
