#include<stdio.h>
int main(){

    int value;
    printf("Please Enter A Value: ");
    scanf("%d", &value);
    int i = 1;
    for(; i <= value; i++){
        printf("%d * %d = %d\n", value , i , value * i);
    }
    // int i = 1;
    // for(;i <= 10; i+=2){
    //     printf("%d\n",i);
    // }
    return 0;
}