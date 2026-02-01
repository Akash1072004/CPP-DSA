#include <stdio.h>
#include <math.h>
int main()
{
    float a, b, c; // quadratic form : ax2 + bx + c..
    printf("enter a : ");
    scanf("%f", &a);
    printf("enter b : ");
    scanf("%f", &b);
    printf("enter c : ");
    scanf("%f", &c);
    float D = (b * b) - 4 * a * c;
    printf("discriminant is %f\n", D);
    float x = sqrt(D);
    float y = sqrt(-D);
    if (D > 0)
    {
        printf("equation has two real roots\n");
        float r1 = (-b + x) / (2 * a);
        float r2 = (-b - x) / (2 * a);
        printf("roots are %f and %f\n", r1, r2);
    }
    else if (D == 0)
    {
        printf("equation has two equal roots\n");
        float r3 = -b / (2 * a);
        printf("root is %f\n", r3);
    }
    else if (D < 0)
    {

        float r4 = -b / (2 * a);
        float r5 = (y / (2 * a));
        printf("roots are imaginary\n");
        printf("roots are %f+%fi", r4, r5);
    }
 return 0;
}
