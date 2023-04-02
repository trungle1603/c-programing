#include <stdio.h>

int main(void)
{
    int numbers, sum;

    while (scanf("%i", &numbers) != "\n")
    {
        sum = 0;

        while (numbers > 0)
        {
            sum += numbers % 10;
            numbers /= 10;
        }

        printf("%i\n", sum);
    }

    return 0;
}