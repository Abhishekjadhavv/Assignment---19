// Write a program to read and display a 2D array of strings in C language.

#include <stdio.h>

int main()
{
    char str[5][30];
    printf("Enter 5 students name\n");
    for (int i = 0; i <= 4; i++)
        fgets(str[i], 30, stdin);
    
    printf("\n");
    for (int i = 0; i <= 4; i++)
    {
        printf("%s", str[i]);
    }
    return 0;
}