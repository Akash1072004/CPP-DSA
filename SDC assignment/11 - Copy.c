#include <stdio.h>
int main()
{
    int s=0, h = 0;
    for (int i = 1; i <= 100; i++)
    {
        if (i % 2 == 0)
        {
            s = s + i;
        }
        else
            h = h + i;
    }
    printf("sum of all the even numbers are %d\n", s);
    printf("sum of all the odd numbers are %d", h);
}