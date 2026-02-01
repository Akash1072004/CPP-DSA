#include<stdio.h>
int main(){
    int n;
    printf("enter n : ");
    scanf("%d",&n);
    int m=n;
    int s = 0;
    while(n!=0){
        int ld = n%10;
        s = s+ld*ld*ld;
        n=n/10;
    }
    if(s==m)printf("the given number %d is armstrong",m);
    else printf("number is not armstrong");
}