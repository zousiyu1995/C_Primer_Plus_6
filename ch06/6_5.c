#include <stdio.h>
// 按金字塔型格式打印字母
void print_space(int space_num);

int main(void)
{
    char ch;
    puts("Please enter an uppercase letter:");
    scanf("%c", &ch);

    for (char row = 'A'; row <= ch; row++)
    {
        // 打印空格
        print_space(ch - row);

        // 升序打印字母
        for (char i = 'A'; i < row; i++)
        {
            printf("%c", i);
        }

        // 中间字母
        printf("%c", row);

        // 降序打印字母
        for (char j = (row - 1); j >= 'A'; j--)
        {
            printf("%c", j);
        }

        // 打印空格
        print_space(ch - row);
        printf("\n");
    }

    return 0;
}

void print_space(int space_num)
{
    for (int count = 0; count < space_num; count++)
        printf("_");
}