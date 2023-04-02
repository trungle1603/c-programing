#include <stdio.h>
#include <string.h>

int main()
{
    // int numbers[7] = {2, 6, 4, 8, 0, 7, 5};

    // Implement array string
    // Can't change content of string
    // Can:
    // names[i] = "bar";
    // names[i] = "foo";
    // Can't:
    // names[i] = "bar";
    // strcpy(names[i], "foo");
    char *names[] = {"Bill", "Charlie", "Fred", "George", "Finny", "Percy", "Ron"};

    // Or, can change content of string
    // char names[NUMBER_OF_STRINGS][STRING_LENGTH+1];

    for (int i = 0; i < 7; i++)
    {
        if (strcmp(names[i], "Ron"))
        {
            printf("Found\n");
            return 0;
        }
    }
    printf("Not Found");
    return 1;
}