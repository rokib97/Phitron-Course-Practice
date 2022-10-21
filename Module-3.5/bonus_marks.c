#include<stdio.h>

int main(){


    int marks, bonus;
    printf("Enter your marks and bonus marks value : ");
    scanf("%d %d", &marks, &bonus);
    if(marks + bonus >= 100){
        printf("YES");
    }else{
        printf("NO");
    }

    return 0;
}