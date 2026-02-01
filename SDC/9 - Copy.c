#include <stdio.h>
int main()
{
    int x;
    printf("enter x : ");
    scanf("%d", &x);
    int r = 0;
    int y=x;
    while (x != 0)
    {
        int ld = x % 10;
        r = r * 10 + ld;
        x = x / 10;
    }
    if (r == y)
    {
        printf("the number %d is palindrome ",y);
    }
    else{
        printf("the number %d is not palindrome",y);
    }
}