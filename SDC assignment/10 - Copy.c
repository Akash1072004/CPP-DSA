#include <stdio.h>
int main()
{
    int a, b, c;
    printf("enter a : ");
    scanf("%d", &a);
    printf("enter b : ");
    scanf("%d", &b);
    printf("enter c : ");
    scanf("%d", &c);
    if (a + b > c && b + c > a && c + a > b)
    {
        if (a != b && b != c && c != a)
        {
            printf("the sides %d %d %d form a scalene triangle", a, b, c);
        }
        else if (a == b && b != c || a == c && a != b || c == b && c != a)
        {
            printf("the sides %d %d %d are forming an isosceles triangle", a, b, c);
        }
        else if (a == b && b == c && c == a)
        {
            printf("the sides %d %d %d are forming an equilateral triangle", a, b, c);
        }
    }
    else
    {
        printf("triangle will not form");
    }
}