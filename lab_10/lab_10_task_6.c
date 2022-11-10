//Task6: Write function void addArrays(const int* a1, const int* a2, int* sum, int size) which
//adds two arraysand store their sum in third array.Do all the array process with the help of
//pointer notation
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include <ctype.h>
void display(int array[], int size);
void addArray(const int* a1, const int* a2, int* sum, int size) {

    for (int i = 0; i < size; i++)
    {
        *(sum + i) = *(a1 + i) + *(a2 + i);
    }
    printf("Elements of 3rd array are:\n ");
    for (int i = 0; i < size; i++)
    {
        printf(" %d\t", *(sum + i));
    }

}
int main()
{
    int a1[20];
    int a2[20];
    int sum[20];
    printf("Enter elements in an array 1 : ");
    printf(" \n");
    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &a1[i]);
    }
    display(a1, 10);
    printf("Enter elements in an array 1 : ");
    printf(" \n");
    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &a2[i]);
    }
    display(a2, 10);
    addArray(&a1[0], &a2[0], &sum[0], 10);

    return 0;
}
void display(int* array, int size)
{
    for (int i = 0; i < 10; i++)
    {
        printf(" %d\t", *(array + i));
    }
    printf(" \n");
}