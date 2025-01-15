/**
 * This program defines variables of different data types
 * It uses the printf function to output the values of these variables
 */

#include <stdio.h>

int main()
{
	int whole_number = 18;
	char character = 'J';
	double decimal_number = 7.5;
	float decimal_fraction = 5.7;
	char string[6] = {'J', 'a', 'y', '\0'};

	printf("%d is an integer or simply a whole number.\n", whole_number);
	printf("%c is a character or simply a single symbol.\n", character);
	printf("%.2f is a double value or simply a decimal number.\n", decimal_number);
	printf("%.2f is a floating number or simply a decimal fraction.\n", decimal_fraction);
	printf("%s is a string or an array of characters, in this case: characters == letters.\n", string);

	return (0);
}
