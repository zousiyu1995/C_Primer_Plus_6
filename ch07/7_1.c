#include <stdio.h>

int main(void)
{
    int spaces = 0, lines = 0, others = 0;
    char ch;

    puts("Enter a string end with #:");

    while ((ch = getchar()) != '#')
    {
        if (ch == '\n')
        {
            lines++;
        }
        else if (ch == ' ')
        {
            spaces++;
        }
        else
        {
            others++;
        }
    }

    printf("spaces: %d, lines: %d, others: %d", spaces, lines, others);
    return 0;
}