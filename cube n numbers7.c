#include<stdio.h>
#include<math.h>
int main()
{
   int n, sum=0;
   printf("Enter n value: ");
   scanf("%d",&n);

   for(int i=1; i<=n; i++)
   {
     sum = sum +pow(i,3);
   }
   printf("%d",sum);
   return 0;
}