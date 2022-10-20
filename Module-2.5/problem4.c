#include<stdio.h>
int main(){

    int first_num, second_num,sum,sub,mult;
    printf("Please Enter Two Number: ");
    scanf("%d %d",&first_num,&second_num);
    sum = first_num + second_num;
    sub = first_num - second_num;
    mult = first_num * second_num;
    printf("Summation of Two Number is: %d\n",sum);
    printf("Sub of Two Number is: %d\n",sub);
    printf("Mult of Two Number is: %d",mult);
    return 0;
}