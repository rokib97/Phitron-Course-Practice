#include<stdio.h>

int main(){

    int n;
    printf("Please Enter A Number: ");
    scanf("%d", &n);
    for(int i = 1; i>=n; i--){
        printf("%d ",i);
    }

    return 0;
}