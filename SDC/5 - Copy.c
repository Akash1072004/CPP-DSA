#include<stdio.h>
int main(){
    int x;
    printf("enter x : ");
    scanf("%d",&x);
    int i=0;
    while(i<=x){
        printf("%d \n",i);
        i=i+2;
    }
}