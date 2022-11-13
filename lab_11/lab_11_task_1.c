//Task1:
//Write a program that inputs the student ID number(like BSITF21M001) and determines whether
//he / she is a legal student or not.Kindly use the array of pointers to save the 5 student ID number.
//(Recap the problem related to searching a specific name that was discussed in the last lecture

#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<ctype.h>
#define MAX 10
#define LEN 40
int length(const char* n);
int compare(const char* l, const char* n);


int main()
{
    char name[LEN];
    //INITIALIZATION
    char list[MAX][LEN] = { "BITF21M502", "BITF21M508", "BITF21M510", "BITF21M511", "BITF21M533", "BITF21M503", "BITF21M535", "BITF21M552", "BITF21M541" };
   //INPUT
    printf("Please enter the student ID: ");
    scanf("%s", name);
    int A;
    int flag = 0;

    //check whether id of student is valid or not
    for (int i = 0; i < MAX; i++)
    {
        A = compare(*(list + i), name);   //function call
        if (A == 1)
        {
            flag = 1;
            break;
        }
    }
    if (flag == 1)
        printf("%s is the legal student", name);
    
    else
        printf("Sorry %s is not in the legal student", name);
}
//**************** FUNCTIONS *********************
int length(const char* n)
{
    int i = 0;
    while (*n != '\0')
    {
        i++;
        n++;
    }
    return i;
}
int compare(const char* l, const char* n)
{
    int l1 = length(l);
    int l2 = length(n);

    int size = 0;

    if (l1 < l2)
    {
        return 0;
    }
    else if (l1 > l2)
    {
        return 0;
    }
    else
    {
        int flag = 1;
        for (int i = 0; i < l1; i++)
        {
            if (*l != *n)
            {
                flag = 0;
                break;
            }
            n++;
            l++;
        }
        if (flag == 1)
        {
            return 1;
        }
        else
        {
            return 0;
        }
    }
}