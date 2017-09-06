#include <stdio.h>

int main()
{

    for (char row = 'F'; row >= 'A'; row--)
    {
        for (char col = 'F'; col >= row; col--)
        {
            printf("%c", col);
        }
        printf("\n");
    }

    return 0;
}