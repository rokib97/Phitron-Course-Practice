#include<stdio.h>
int main(){

    int a, b;
    printf("Please Enter Two Number: ");
    scanf("%d %d", &a,&b);
    if(a > b){
        printf("A = %d is Bigger", a);
    }else if(b > a){
        printf("B = %d is Bigger", b);
    }else{
        printf("They are equal");
    }


    return 0;
}