/* Even or odd. Number divisible by 2 is even otherwise odd. */
#include<stdio.h>

void main() 
{
    int n;
    printf("\n Enter a positive number");
    scanf("%d", &n);
    if ( n % 2 == 0) 
        printf("\n Number %d is even,", n);
    else
        printf("\n Number %d is odd,", n);
}
