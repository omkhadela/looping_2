#include<stdio.h>
main()
{
    int a=1,n;
    printf("Enter your number :");
    scanf("%d",&n);
    do
    {
       printf("%d ",a);
       a++;
    }
    while(a<=n);
}
