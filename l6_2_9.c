#include<stdio.h>
main()
{
  int n,fact=1;
  printf("Enter your number :");
  scanf("%d",&n);
  do
  {

   fact=fact*n;
   printf("%d ",n);
   n--;

  }
   while(n>0);
   printf("\nthe answer is :%d",fact);
}
