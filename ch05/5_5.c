#include <stdio.h>
#include <stdbool.h>

int main()
{
    int days, count = 0, sum = 0;
    puts("Input days:");
    scanf("%d", &days);

    while (count++ < days)
    {
        sum += count;
    }
    printf("money is %d", sum);
    return 0;
}