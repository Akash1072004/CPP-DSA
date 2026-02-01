#include<stdio.h>
int main(){ //largest of all digits in given number....
    int x;
    printf("enter your number : ");
    scanf("%d",&x);
    int b=0;
    while(x!=0){
        int ld=x%10;
        if(ld>b)b=ld;
        else b = b;
        x=x/10;
    }
    printf("largest digit in the given number is %d",b);
}