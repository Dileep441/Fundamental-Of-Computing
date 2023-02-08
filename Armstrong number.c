#include <stdio.h>
int main() {
    int num, sum, rem, result = 0;
    printf("Enter a three digits integer: ");
    scanf("%d", &num);
    sum = num;

    while (sum!= 0) 
	{
        rem = sum % 10;
       result += rem * rem * rem;
        sum/= 10;
    }
    if (result == num)
        printf("%d is an Armstrong number.", num);
    else
        printf("%d is not an Armstrong number.", num);

    return 0;
}
