#include<stdio.h>

int main(){

    int m;
    scanf("%d",&m);
    int steps;
    // if(m%5==0){
    //     steps= m / 5;
    // }else{
    //     steps = (m/5) + 1;
    // }
    steps = m / 5 + (m % 5 != 0);
    printf("%d\n",steps);
    return 0;
}