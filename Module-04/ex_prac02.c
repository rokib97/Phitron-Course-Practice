#include<stdio.h>

int main(){

    // int i, sum=0;
    // for(i; i<=10; i++){
    //     sum = sum+i;
    // }
    // printf("Sum of Numbers: %d\n", sum);

    int i=1, sum=0;
    while(i != 11){
        sum += i;
        i++;
    }
    printf("Sum of Numbers: %d\n",sum);

    return 0;
}