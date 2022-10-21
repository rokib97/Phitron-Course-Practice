#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    
    int a,b,diff;
    scanf("%d %d", &a,&b);
    if(a > b){
        diff = a - b;
    }else{
        diff = b - a ;
    }
    printf("%d", diff);
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}