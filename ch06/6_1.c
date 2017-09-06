#include <stdio.h>

int main()
{
    char word[26];
    for (char i = 'a'; i <= 'z'; i++)
    {
        word[i] = i;
        printf("%c ", i);
    }

    return 0;
}