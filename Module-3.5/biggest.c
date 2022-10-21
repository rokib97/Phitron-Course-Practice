#include<stdio.h>

int main(){

    int a, b, c;
    printf("Enter Three Number: ");
    scanf("%d %d %d", &a, &b, &c);
    if(a > b && a > c){
        printf("%d is bigger", a);
    }else if( b > c && b > a){
        printf("%d is bigger", b);
    }else if( c > a && c > b){
        printf("%d is bigger", c);
    }else{
        printf("They are equal");
    }

    return 0;
}