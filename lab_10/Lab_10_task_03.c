//Task3: Write void copyIntArray(int *dest, const int *src, int size)function which copies an 
//array of integers from one array to other using pointer notation
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>  
void display(int* array, int size);
void copyIntArray(int* dest, const int* src, int size);

int main()
{
    //Initialize array     
    int arr1[100];
    int arr2[100];
    int n;

    //input number 
    printf("ENter how many number of elements you enter :");
    scanf("%d", &n);

    // input elements in n array
    for (int i = 0; i < n;i++)
    {
        printf("Enter element in an array at [%d]: ", i);
        scanf("%d", &*(arr1 + i));

    }

    //Displaying elements of array arr1     
    printf("Elements of original array: \n");
    display(arr1, n);

    //Copying all elements of one array into another   
    copyIntArray(arr2, arr1, 3);
    //display elements of array 2 
    printf("\n");
    printf("Elements of new array: \n");
    display(arr2, n);
    return 0;
}
//copy function
void copyIntArray(int* dest, const int* src, int size)
{
    for (int i = 0; i < size; i++) {
        *(dest + i) = *(src + i);
    }

}
// disply function
void display(int* array, int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("%d ", *(array + i));
    }
}
