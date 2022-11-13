//Task3:
//Write a program that read a character array as an input.After reading in the array process the
//array’s elementand find the count of vowels in that arrayand convert the vowels to upper case if
//it is in lowerand ouput the vowels.Write a function isVowel() that takes a character as a
//parameterand tells whether a character is a vowels or not
// 
//Sample Input :
//m n a h i o p k k l e
//Sample Output :
//Vowel in uppercase : AIOE
//No of vowels = 4


#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<ctype.h>
#define SIZE 100
void isVowel(char ch[]);

//main function 
int main()
{
    //declaration
    char ch[SIZE];
    int count = 0;

    //Input character array from user
    printf("Enter a character array :");
    scanf("%s", &ch);

    //count number of vowels character 
    for (int i = 0; ch[i] != '\0'; i++)
    {
        if ((ch[i] == 'a') || (ch[i] == 'e') || (ch[i] == 'i') || (ch[i] == 'o') || (ch[i] == 'u'))
        {
            count++;
        }
    }

    // function call
    printf("\n");
    isVowel(ch);

    //print total number of vowels present in an array
    printf("No of vowels: %d", count);

    return 0;
}

//*********************** Function **************************8
void isVowel(char ch[])
{

    printf("Vowel in upperCase: ");

    for (int i = 0; ch[i] != '\0'; i++)
    {
        if ((ch[i] == 'a') || (ch[i] == 'e') || (ch[i] == 'i') || (ch[i] == 'o') || (ch[i] == 'u'))
        {
            ch[i] = toupper(ch[i]);                //convert vowels to upper case 
            printf("%c", ch[i]);                   //print output
        }

    }
    printf("\n");
    printf("\n");

}