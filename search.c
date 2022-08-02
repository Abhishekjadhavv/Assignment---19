// Write a program to search a string in the list of strings.

#include <stdio.h>
#include <string.h>
int main()
{
    char str[5][30];
    char search[30] = "Abhishek\n";
    int i ;

    printf("Enter 5 students name");
    for (int i = 0; i <= 4; i++)
        fgets(str[i], 30, stdin);

    for (i = 0; i <= 4; i++)
    {
        if (!strcmp(str[i], search))
        {
            printf("search successful");
            return 0;
        }
    }
    printf("search unsuccessful!");
    return 0;
}