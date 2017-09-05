#include <stdio.h>

int main()
{
    char ch;
    int count = 1;
    puts("Enter a char(Type # to quit)");

    while ((ch = getchar()) != '#')
    {
        if (ch != '\n') // 避免输出字符末尾的\n
        {
            printf("%c-%d\t", ch, ch);
        }
        if (count++ % 8 == 0)
        {
            putchar('\n');
        }
    }
    putchar('\n');

    return 0;
}
