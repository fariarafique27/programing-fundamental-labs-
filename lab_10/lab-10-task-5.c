/*
Task5: Define a int array called t[] of size 20 and initialize it randomly.Send the address of the
first element of the array to a function called ReadThemAll().Also pass 2 integers to
ReadThemAll().The function will assign the array address to a pointer called p and read int
numbers in all the slots between these two numbers.The ReadThemAll() function should not
use brackets, [] but only the asterisk operator,* .When the function is done, have main() print
out the entire array.
*/
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<conio.h>
#define SIZE 20

void readThemAll(int* p, int size, int n1, int n2);
void display(const int* p);
int main()
{
	srand(time(0));

	int t[20];
	int num1, num2;
	num1 = 0;
	num2 = 0;
	// Declaration of array
	for (int a = 0; a < SIZE; a++)
	{
		t[a] = rand() % 20;
	}
	display(&t[0]);

	// Taking inputs from user
	printf("Enter starting number : ");
	scanf("%d", &num1);
	printf("Enter Ending Number : ");
	scanf("%d", &num2);

	// Displaying Output
	printf("Numbers between the Given range : \n");
	readThemAll(t, 20, num1, num2);
	printf("\n");

	return 0;

}
//Displaying array 
void display(const int* p)
{
	for (int b = 0; b < SIZE; b++)
	{
		printf("%d\t", p[b]);
	}
	printf("\n");
}
void readThemAll(int* p, int size, int n1, int n2)
{
	for (int a = 0; a < size; a++)
	{
		if (*(p + a) == n1)
		{
			for (int b = a + 1; *(p + b) != n2; b++)
			{
				printf("%d\t", *(p + b));
			}
		}
	}
	printf("\n");
}