#include <stdio.h>

int main()
{
    char ch, str[100];
    int count = 0, index = 0;

    while ((ch = getchar()) != '#')
    {
        if (ch == '.')
        {
            ch = '!';
            count++;
            printf("in .\n");
            str[index] = ch;
            index++;
        }
        else if (ch == '!')
        {
            ch = '!';
            count++;
            printf("in !\n");
            str[index] = ch;
            index++;
        }
        str[index] = ch;
        index++;
    }

    str[index] = '\0';
    printf("%c\n", str);
    printf("Replace times: %d\n", count);
    return 1;
}