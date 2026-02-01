#include <stdio.h>
int main()
{
    int x, y, z;
    printf("enter x : ");
    scanf("%d", &x);
    printf("enter y : ");
    scanf("%d", &y);
    printf("enter z : ");
    scanf("%d", &z);
    if (x + y > z && y + z > x && z + x > y)
    {
        if (x != y && y != z && z != x)
        {
            printf("the sides %d %d %d form a scalene triangle", x, y, z);
        }
        else if (x == y && y != z || x == z && x != y || z == y && z != x)
        {
            printf("the sides %d %d %d are forming an isosceles triangle", x, y, z);
        }
        else if (x == y && y == z && z == x)
        {
            printf("the sides %d %d %d are forming an equilateral triangle", x, y, z);
        }
    }
    else
    {
        printf("triangle will not form");
    }
}