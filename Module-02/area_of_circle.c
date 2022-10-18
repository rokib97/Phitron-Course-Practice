#include<stdio.h>

int main(){
    int radius;
    printf("Please Enter The area of circle: ");
    scanf("%d",&radius);
    float area;
    area = 3.14159 * radius * radius;
    printf("Area of Circle is: %f", area);
    return 0 ;
}
