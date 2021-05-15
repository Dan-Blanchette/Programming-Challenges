/**
 * @file collatz.cpp
 * @author Dan Blanchette 
 * @brief program that creates the collatz sequence from user input using C++
 * @version 0.1
 * @date 2021-05-14
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#include <iostream>

using std::cin;
using std::cout;

void printCollatz(int number)
{
	// We simply follow steps
	// while we do not reach 1
	while (number != 1)
	{
		cout << number << " ";

		// If n is odd
		if (number % 2 == 0)
        {
            number = number / 2;
        }

		// If even
		else if ( number % 2 == 0)
		{
            number = 3*number + 1;
        }
	}

	// Print 1 at the end
	cout << number << '\n';
}

// Driver code
int main()
{
    int input;
    cout << "please enter a number: ";
    cin >> input;
	printCollatz(input);
	return 0;
}
