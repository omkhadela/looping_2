#include<stdio.h>
main()
{
  int sum=0,n,a=1;
  printf("Enter your number :");
  scanf("%d",&n);
  do
  {
   sum=sum+a;
   printf("%d\n",sum);
   a++;

  }
   while(a<=n);
}
