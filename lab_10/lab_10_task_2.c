//Task2: Write a void printAdddressValue(const char* ch) function that out the addressand the
//value of a character character array using pointer notation

#define _CRT_SECURE_NO_WARNINGS
#include <math.h>
#include <stdio.h>
void PrintAddressValue(const char* ch);

int main()
{
    char ch[20];
    printf("ENter your name \n I'll show the value and address : ");
    scanf("%s", ch);

    PrintAddressValue(ch);
    return 0;
}
void PrintAddressValue(const char* ch)
{

    printf("The address of given array is: %p \n", ch);
    printf("The value at given address of  array is: %s ", ch);
}