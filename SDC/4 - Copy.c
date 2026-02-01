#include <stdio.h>
int main()
{
    int x;
    printf("enter x : ");
    scanf("%d", &x);
    int i = 1;
    while (i <= 10)
    {
        int t = x;
        t = t * i;
        printf("%d\n", t);
        i++;
    }
}