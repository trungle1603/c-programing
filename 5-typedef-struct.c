#include <stdio.h>
#include <string.h>

typedef struct
{
    char *name;
    char *number;
} Person;

int main(void)
{
    Person people[2];

    people[0].name = "Carter";
    people[0].number = "000-111-222-333";

    people[1].name = "David";
    people[1].number = "000-456-789-333";

    for (int i = 0; i < 2; i++)
    {
        if (strcmp(people[i].name, "David") == 0)
        {
            printf("Found %s\n", people[i].number);
            return 0;
        }
    }
    printf("Not found\n");
    return 1;
}