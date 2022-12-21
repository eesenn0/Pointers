/*Write a C program to swap two numbers using pointers and functions. How to swap two numbers using call by reference method. Logic to swap two number using pointers in C program.*/

#include <stdio.h>

//"Swap" function prototype
void swap(int *num1, int *num2);

int main(void)
{
    int num1, num2;

    //Taking inputs
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);
    
    printf("Before swapping numbers\n");
    printf("num1 = %d\tnum2 = %d\n", num1, num2);
    //Pass the adresses of num1 and num2
    swap(&num1, &num2);

    return 0;
}
//Function to swap two numbers
void swap(int *num1, int *num2)
{
    //Copy num1 to the variable
    int var = *num1; 
    //Swap num1 to num2
    *num1 = *num2;
    //Swap num2 to variable
    *num2 = var;

    printf("After swapping numbers\n");
    printf("num1 = %d\tnum2 = %d", *num1, *num2);
}