#include<stdio.h>

int main(){
    int a, b, sum,sub;
    printf("Please Enter Two Numbers: ");
    scanf("%d %d", &a, &b);
    sum = a + b;
    sub = a - b;
    printf("Sum of The two number is: %d\nSub of The two number is: %d",sum,sub);
    printf("Sub of The two number is: %d",sub);
    return 0;
}
