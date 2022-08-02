// Write a program that asks the user to enter a username. If the username entered is
// one of the names in the list then the user is allowed to calculate the factorial of a
// number. Otherwise, an error message is displayed

#include <stdio.h>
#include <string.h>
int fact(int);
int main()
{
    char str[5][30] = {"Abhishek", "Akshay", "vicky", "sagar", "machhindra"};
    char user_name[30];
    int i, n;

    printf("Enter user name");
    scanf("%s", user_name);

    for (i = 0; i <= 4; i++)
    {
        if (!strcmp(user_name, str[i]))
            break;
    }

    if (i <= 4)
    {
        printf("Enter a number");
        scanf("%d", &n);
        printf("factorial of %d is %d",n, fact(n));
    }
    else
    {
        printf("Sorry invalid user name");
    }

    return 0;
}

int fact(int n)
{
    int f = 1;

    while (n)
        f *= n--;

    return f;
}