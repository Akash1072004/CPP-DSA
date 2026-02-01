#include<stdio.h>
int main (){
    int a,b,x,y,m;
    printf("enter a : ");
    scanf("%d",&a);
    printf("enter b : ");
    scanf("%d",&b);
    if(a<b)m=a;
    else m=b;
    int s;
for(int i=m;i>=1;i--){
    if(a%i==0 && b%i==0){
         s=i;
        break;
    }
}
    x = a/s;
    y = b/s;
    printf("LCM of %d and %d is %d",a,b,x*y*s);
}