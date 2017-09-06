#include <stdio.h>

int main(void)
{
    char lets[27] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    int count = 0;

    for (size_t row = 0; row < 6; row++)
    {
        for (size_t col = 0; col <= row; col++)
        {
            printf("%c", lets[count]);
            count++; //记录内层循环次数
        }
        printf("\n");
    }

    return 0;
}