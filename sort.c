// Write a program to sort 10 city names stored in two dimensional arrays, taken from
// the user.

#include <string.h>
#include <stdio.h>

int main()
{
    char str[10][30];
    char cpy[30];

    printf("Enter 10 city names\n");

    for (int i = 0; i < 10; i++)
    {
        fgets(str[i], 20, stdin);
    }

    printf("\n");

    for (int i = 1; i <= 9; i++)
    {
        for (int j = 0; j < 10-i ; j++)
        {
            int com = strcmp(str[j], str[j+1]);
            if (com > 0)
            {
                strcpy(cpy, str[j]);
                strcpy(str[j], str[j+1]);
                strcpy(str[j+1], cpy);
            }
        }
    }

    for (int i = 0; i < 10; i++)
    {
        printf("%s", str[i]);
    }
    return 0;
}