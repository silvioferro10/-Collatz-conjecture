#include<stdio.h>

int f(int a){
    printf("%2d ",a);
    if(a==1)
        return -1;
    if(a%2==1)
        return f(3*a+1);
    else
        return f(a/2);
}

int main(){
    int a;
    printf("Scrivi un numero: ");
    scanf("%d",&a);
    f(a);
}