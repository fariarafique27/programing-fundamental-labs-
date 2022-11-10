//Task4: Write the implementation of void uppercase(char*) function that convert the character
//array of lower case characters to uppercase using pointer notation.
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h> 
#include<ctype.h>
void changeCase(char* ch);
void display(char* ch);
int main()
{
	char arr1[100];

	printf("Enter your name :");
	scanf("%s", arr1);

	printf("\nElement in array before changing \n:");
	display(arr1);
	changeCase(arr1);
	printf("\nElement After changing \n:");
	display(arr1);
	return 0;

}
void changeCase(char* ch)
{
	for (int i = 0;*(ch + i) != '\0';i++)
	{

		if (*(ch + i) >= 'a' && *(ch + i) <= 'z')
		{
			*(ch + i) = *(ch + i) - 32;
			//*(ch + i)=toupper(*(ch + i));
		}
		else if (*(ch + i) >= 'A' && *(ch + i) <= 'Z')
		{
			*(ch + i) = *(ch + i) + 32;
			//	*(ch + i)=tolower(*(ch + i));
		}
	}
}
void display(char* ch)
{
	for (int i = 0;*(ch + i) != '\0'; i++)
	{
		printf("%c", *(ch + i));
	}
}