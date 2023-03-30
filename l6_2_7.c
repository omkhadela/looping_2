#include<stdio.h>
main()
{
  int n=2000;
  do
  {
   if(n%4==0)
   printf("%d ",n);
   n++;
  }
  while(n<=3000);
}
