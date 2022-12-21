/*Write a C program to read two numbers from user and add them using pointers. How to find sum of two number using pointers in C programming. Program to perform arithmetic operations on number using pointers.*/

#include <stdio.h>

int main()
{
    float no1, no2;
    //define our pointers
    float *p1, *p2;

    p1 = &no1; // p1 stores the address of no1
    p2 = &no2; // p2 stores the address of no2

    //taking input from user
    printf("Enter two numbers: ");
    scanf("%f %f", p1, p2   );

    float sum = *p1 + *p2;

    printf("Sum = %.0f", sum);

    return 0;
}