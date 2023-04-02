#include <stdio.h>

int main(void)
{
    int number[] = {20, 500, 10, 5, 1, 50};

    for (int i = 0; i < 7; i++)
    {
        if (number[i] == 50)
        {
            printf("Found\n");
            return 0;
        }
    }
    printf("Not found\n");
    return 1;
}