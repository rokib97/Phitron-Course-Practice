#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    if(a > 0 && b > 0 && c > 0){
        if(a == b && a == c && b == a && b == c && c == a && c == b){
            printf("Yes");
        }else{
            printf("No");
        }
    }else{
        printf("No");
    }
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}