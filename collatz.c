/**
 * @file collatz.c
 * @author Dan Blanchette
 * @brief this program will generate the collatz sequence based on user number that is entered
 * @version 0.1
 * @date 2021-05-14
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#include <stdio.h>
#include <stdlib.h>

void collatz(int number)
{
    while (number != 1)
    {
        printf("%d ", number);

        if (number % 2 == 0)
        {
            number = number / 2;
        }
        else if (number % 2 == 1)
        {
            number = 3 * number + 1;
        }
    }
    printf("%d\n", number);
}

int main()
{
    int input;
    char str[20];
    printf("Please enter a number: ");
    scanf("%s", str);

    input = atoi(str);

    collatz(input);
    return 0;
}

