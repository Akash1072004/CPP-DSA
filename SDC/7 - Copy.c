#include <stdio.h>
int main()
{
    int x;
    printf("enter x : ");
    scanf("%d", &x);
    int f=1;
    int i = 1;
    while (i <= x)
    {
        f=f*i; 
        i++;
    }
    printf("factorial of %d is %d",x,f);
}