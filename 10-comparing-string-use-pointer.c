#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
    // int i, j;
    // scanf("%i %i", &i, &j);

    // if (i == j)
    // {
    //     printf("Same\n");
    // }
    // else
    // {
    //     printf("Difference\n");
    // }

    char *s, *p;
    scanf("%as %as", &s, &p);

    if (s == p)
    {
        printf("Same");
    }
    else
    {
        printf("Difference");
    }

    free(s);
    free(p);
}