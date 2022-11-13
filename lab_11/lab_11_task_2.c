//Task2:
//Write a program that creates an array of numbers of size 50 and initialize it randomly
//from 1 to 200. Now take 2 more arrays, 1 for even numbers and 1 for odd numbers.Traverse the
//array numbersand check whether it is an even number if it is then store this number to even
//array else to odd array.Display the output of both evenand odd number arrays.Kindly use the
//pointer notation to access the array elements.
//Note : write a function isEven(int number) that will return 1 if a number is even and 0 if
//the number is odd

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define SIZE 50
int isEven(int number);

//main function
int main()
{
	srand(time(0));
	int array[SIZE]  ;

	//initialization of an array by rand function
	for (int i = 0; i < SIZE; i++)
	{
		*(array + i) =  rand() % 21 ;
	}
	//printing element of complete array
	for (int i = 0; i < SIZE; i++)
	{
		printf("%d ", *(array + i));
	}
	printf("\n");
	//declaration
	int evenArray[50], oddArray[50];
	int check;
	int j = 0, k = 0;

	//chech number is even or odd 
	for (int i = 0; i < 50; i++)
	{
		check = isEven(*(array + i));
		if (check == 1)
		{
			*(evenArray + j) = *(array + i);
			j++;
		}
		else
		{
			*(oddArray + k) = *(array + i);
			k++;
		}
	}
	printf("\n");
	//printing of even array
	printf("EVEN ARRAY IS: \n");
	for (int i = 0; i < j; i++)
	{
		if (*(evenArray + i) != 0)
		{
			printf("%d ", *(evenArray + i));
		}
	}
	//printing of odd array
	printf("\n");
	printf("\n ODD ARRAY IS: \n");
	for (int i = 0; i < k; i++)
	{
		printf("%d ", *(oddArray + i));
	}

	return 0;
}
//******************* Function  ***************************88
int isEven(int number)
{
	if (number % 2 == 0)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
