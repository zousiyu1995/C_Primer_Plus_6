#include <stdio.h>
#include <stdbool.h>

int main()
{
    int even_num = 0, odd_num = 0;
    int even_sum = 0, odd_sum = 0;
    float even_ave, odd_ave;
    int input_num;
    bool if_exit = true; // 控制是否退出

    puts("Enter an integer(Type 0 to quit):");

    while (if_exit)
    {
        scanf("%d", &input_num);
        if (input_num == 0)
        {
            break;
        }
        else if (input_num % 2 == 0)
        {
            even_num++;
            even_sum += input_num;
        }
        else
        {
            odd_num++;
            odd_sum += input_num;
        }
    }

    even_ave = (float)even_sum / (float)even_num;
    odd_ave = (float)odd_sum / (float)odd_num;

    printf("even_num: %d, even_sum: %d\n", even_num, even_sum);
    printf("odd_num: %d, odd_sum: %d\n", odd_num, odd_sum);
    printf("even_ave: %f, odd_ave: %f\n", even_ave, odd_ave);

    return 0;
}
