#include<stdio.h>

int main(){

    int n,w,sum=0;
    printf("Please Enter a number: ");
    scanf("%d",&n);
    // for(int i=1; i<=n; i++){
    //     scanf("%d", &w);
    //     sum += w;
    // }
    int i = 1;
    while(i!=n + 1){
        scanf("%d", &w);
        sum += w;
        i++;
    }
    printf("Sum of weights: %d",sum);

    return 0;
}