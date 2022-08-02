// Write a program to print the strings which are palindrome in the list of strings.

#include <stdio.h>
#include <string.h>

int main()
{
    char str[5][30] = {"nitin", "sagar", "abhi", "waw", "vikki"};
    char palin[30];

    for (int i = 0; i <= 4; i++)
    {
        strcpy(palin, str[i]);
        strrev(palin);
        if (!strcmp(palin, str[i]))
            printf("%s ", str[i]);
    }
    return 0;
}