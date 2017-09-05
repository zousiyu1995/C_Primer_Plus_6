#include <stdio.h>

int main()
{
    int num, mark;

    puts("Enter a int");
    scanf("%d", &num);
    mark = num + 10;

    while (num <= mark)
    {
        printf("%d\t", num++);
    }

    return 0;
}