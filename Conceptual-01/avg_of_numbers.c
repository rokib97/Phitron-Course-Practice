#include<stdio.h>
int main(){


    int a, b, c, sum;
    // float avg;
    printf("Enter Three Numbers: ");
    scanf("%d %d %d", &a, &b, &c);
    sum = a + b + c;
    float avg = (float)sum / 3;

    printf("sum = %d\n", sum);
    printf("avg = %f", avg);
    

    return 0;
}