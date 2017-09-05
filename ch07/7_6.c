#include <stdio.h>

int main()
{
    char pre, cur;
    int count = 0;

    while ((cur = getchar()) != '#')
    {
        if ((cur == 'i') && (pre == 'e'))
        {
            count++;
        }
        else
        {
            pre = cur;
        }
    }

    printf("%d", count);
    return 0;
}