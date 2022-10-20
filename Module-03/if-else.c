#include<stdio.h>
int main(){
    int num;
    printf("Please Enter a Integer: ");
    scanf("%d",&num);
    if(num % 2 == 0){

        printf("The input number is even number\n");
    }else{
        printf("The input number is odd number\n");
    }
}