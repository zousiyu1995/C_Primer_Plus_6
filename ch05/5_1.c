#include <stdio.h>
#include <stdbool.h>

int main(void)
{
    const int MIN_PER_H = 60;
    int hour, min;
    puts("Enter min:");
    // while ((scanf("%d", &min) == 1) && (min > 0)) // 仅在用户输入了数字且数字大于0才进入循环
    // {
    //     hour = min / MIN_PER_H;
    //     min = min % MIN_PER_H;
    //     if (hour <= 24)
    //     {
    //         printf("%d hour %d min\n", hour, min);
    //     }
    //     else
    //     {
    //         int day = hour / 24;
    //         hour = hour % 24;
    //         printf("%d day %d hour %d min\n", day, hour, min);
    //     }
    // }
    // ******************************
    while (true)
    {
        scanf("%d", &min);
        if (min > 0)
        {
            hour = min / MIN_PER_H;
            min = min % MIN_PER_H;
            printf("%d hour %d min\n", hour, min);
        }
        else
        {
            puts("quit!");
            break;
        }
    }
}