#include<stdio.h>

void main() 
{
    int m1, m2, m3, m4;
    int average;
    printf("Enter the marks of 1st student.");
    scanf("%d", &m1);
    printf("Enter the marks of 2nd student.");
    scanf("%d", &m2);
    printf("Enter the marks of 3rd student.");
    scanf("%d", &m3);
    printf("Enter the marks of 4th student.");
    scanf("%d", &m4);
    average = (m1 + m2 + m3 + m4)/4;
    printf("The average marks scored by students = %d\n", average);
}
