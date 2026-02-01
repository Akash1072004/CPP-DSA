#include <stdio.h>
int main()
{ // reverse the number...
    int x;
    printf("enter x : ");
    scanf("%d", &x);
    int r = 0;
    while (x != 0)
    {
        int ld = x % 10;
        r = r * 10 + ld;
        x = x / 10;
    }
    printf("%d", r);
}