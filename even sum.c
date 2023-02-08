#include<stdio.h>
int main()
{
   int n, sum=0;
   printf("Enter n value: ");
   scanf("%d",&n);

   for(int i=2; i<=n; i+=2)
   {
     printf("%d+",i);
     sum = sum + i;
   }
   printf("\b=%d",sum);
   return 0;
}
