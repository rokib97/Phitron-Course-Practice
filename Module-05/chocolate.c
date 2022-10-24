#include<stdio.h>
int main(){

    int n;
    printf("Please Enter Number of Chocolatee : ");
    scanf("%d",&n);
    int chocolate = n;
    int packet = n;
    while(packet >=4){
        chocolate += (packet/4);
        packet = (packet/4) + (packet%4);
    }
    printf("%d",chocolate);
    return 0;
}