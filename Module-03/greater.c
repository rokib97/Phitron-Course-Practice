#include<stdio.h>
int main(){

    int num1, num2;
    printf("Please Enater Two Number: ");
    scanf("%d %d",&num1,&num2);
    if(num1 > num2){
        printf("%d is greater than %d\n", num1,num2);
    }else{
        printf("%d is less than %d", num1,num2);
    }
    return 0;
}