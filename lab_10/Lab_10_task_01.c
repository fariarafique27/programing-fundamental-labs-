//Task 1: Write a program that create a two - dimensional integer array named X of 3 by 3, and
//initialize it by user input, and write the following functions.
//1. Write a function to print array as printArray(X);
//2. Write a function that calculates the average of all the elements in the integer array named
//x.
//3. Write a function that computes the square root of the sum of the squares of all the
//positive elements in array named X.
//4. Write a function that take array X and an integer num and return true if num exist in X,
//false otherwise


#define _CRT_SECURE_NO_WARNINGS
#include <math.h>
#include <stdio.h>
void toPrint(int X[3][3]);
void average(int X[3][3]);
void sum_of_square(int X[3][3]);
int check(int X[3][3], int num);
int main()
{
    int X[3][3];

    int num;
    printf("Enter data in an array\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            scanf("%d", &X[i][j]);
        }
    }
    toPrint(X);                      ///function call
    printf("\n");
    average(X);                     ///function call
    printf("\n");
    sum_of_square(X);              ///function call
    printf("\n");

    printf("\n \n Enter data in an arraynumber\n  i will tell u its is present in my array or not: ");
    scanf("%d", &num);
    if (check(X, num))          ///function call
    {
        printf(" Congratullations....!!!!Number is present");
    }
    else
    {
        printf(" Opps...!!!!Number not is present");
    }
    return 0;
}
void toPrint(int X[3][3])            //it will print all element present in a loop
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d\t", X[i][j]);
        }
    }
}
void average(int X[3][3])                  //average function
{
    int sum = 0;
    int count = 0;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            sum += X[i][j];
            count++;
        }
    }
    printf("\nsum of numbers are : %d\t", sum);
    int average = sum / count;
    printf("\n Average of numbers in array is: %d\t", average);
}

void sum_of_square(int X[3][3])               // add square sum and get square root
{
    int sum = 0;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            int a = X[i][j] * X[i][j];
            sum += a;
        }
    }
    printf("\nthe sum of square is : %d\t", sum);
    sum = sqrt(sum);
    printf("\n Square root of sum of square is : %d\t", sum);
}
int check(int X[3][3], int num)
{
    int flag = 0;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (X[i][j] == num)
            {
                flag = 1;
                break;
            }

        }
    }
    return flag;
}