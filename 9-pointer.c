#include <stdio.h>

// typedef char *string;

int main(void)
{

    // Pointer
    // & - get the address of a piece of data in memory
    // * - reference operator, go to a specific address

    int n = 50;
    int *p = &n;        // pointer p pointer to address of n
    printf("%p\n", p);  // address
    printf("%i\n", *p); // 50

    char *s = "Hi!";
    // %p
    printf("%p\n", &s); // address

    // %c
    // Pointer Arithmetic - con trỏ số học
    printf("%c\n", s[0]); // "H"
    printf("%c\n", s[1]); // "I"
    printf("%c\n", s[2]); // "!"

    printf("%c\n", *s);       // "H"
    printf("%c\n", *(s + 1)); // "I"
    printf("%c\n", *(s + 2)); // "!"

    // %s
    printf("%s\n", s);     // "HI!"
    printf("%s\n", s + 1); // "I!"
}