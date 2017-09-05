#include <stdio.h>
#include <stdbool.h>

int main()
{
    int days, weeks, remain;

    while (true)
    {
        puts("Enter days:");
        scanf("%d", &days);

        if (days > 0)
        {
            weeks = days / 7;
            remain = days % 7;
            printf("%d days are %d weeks, %d days\n", days, weeks, remain);
        }
        else
        {
            puts("quit!");
            break;
        }
    }

    return 0;
}