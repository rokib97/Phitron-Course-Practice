#include<stdio.h>
int main(){

    int i=1, n, sum=0;
    printf("Please Enter a Number: ");
    scanf("%d",&n);
    // for(i; i<=n; i++){
    //     sum += i;
    // }
    // printf("Sum of Numbers upto n is: %d\n",sum);


    while(i != n + 1){
        sum += i;
        i++;
    }
    printf("Sum of Numbers upto n is: %d\n",sum);

    return 0;
}