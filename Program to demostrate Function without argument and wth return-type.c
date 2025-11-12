#include <stdio.h>
#include <stdlib.h>
int getnumber()
{
int num;
printf("Enter a number:");
scanf("%d",&num);
return num;
}

int main()
{
int n=getnumber();
printf("You enter : %d",n);
}
