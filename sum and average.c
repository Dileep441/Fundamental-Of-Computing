#include<stdio.h>
int main()
{
	 int n, i;
	 float num, sum = 0, avg;
	 printf("enter the number of elements:");
	 scanf("%d",&n);
	 i=1;
	 while(i<=n)
	 {
	  printf("Enter the numbers: ",i);
	  scanf("%f", &num);
	  sum = sum + num;
	  i++;
	 }
	 avg = sum/n;
	 printf("\nSum = %0.2f", sum);
	 printf("\nAverage = %0.2f", avg);
	 return(0);
}
