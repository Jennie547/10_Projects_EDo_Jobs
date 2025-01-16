#include <stdio.h>

int main()
{
  int number;

  printf("Enter a number, please: ");
  scanf("%d", &number);

  char character;

  printf("Enter a character, please: ");
  scanf(" %c", &character);

  float decimal;
  
  printf("Enter a decimal number, please: ");
  scanf("%f", &decimal);

  char string[25];

  printf("Enter a string, please: ");
  scanf("%19s", &string);

  printf("You entered the number - %d\n", number);
  printf("You entered the character - %c\n", character);
  printf("You entered the decimal number - %f\n", decimal);
  printf("You entered the string %s\n", string);

  return (0);
}