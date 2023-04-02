#include <stdio.h>
#include <stdlib.h>

int main(void)
{
  // String
  printf("Input a string using array charater? ");
  // Get and save the name the user types
  char answer[30] = scanf("%s", answer);
  // Output the name the user typed
  printf("Hello, %s", answer);

  // String - Pointer
  printf("Input a string using pointer? ");
  char *s;
  s = malloc(256);   // Cấp phát bộ nhớ
  scanf("%255s", s); // Don't read more than 255 chars
  printf("%s", s);
  free(s); // clean memory

  // No need to malloc `p` here
  char *p;
  scanf("%as", &p); // GNU C library supports this type of allocate and store.,
  printf("%s", p);
  free(p); // clean memory

  // Number
  int myNum;
  scanf("%i", &myNum);
  // Ask the user to type a number
  // Get and save the number the user types

  // Output the number the user typed
  printf("Your number is: %i", myNum);

  // Long
  long nLong;
  scanf("%li", &nLong);
  printf("Your long number is: %li", nLong);

  // Float
  float nFloat;
  scanf("%f", &nFloat);
  printf("Your float number is: %.2f", nFloat);
}
