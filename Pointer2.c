/*Write a C program to swap two numbers using pointers and functions. How to swap two numbers using call by reference method. Logic to swap two number using pointers in C program.*/

#include <stdio.h>

int main(void)
{
    int num1, num2;
    int *p1, *p2; //pointers

    //taking inputs
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    //swapping numbers
    p1 = &num2;
    p2 = &num1;

    printf("num1 = %d\tnum2 = %d", *p1, *p2);

    return 0;
}