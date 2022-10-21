#include<stdio.h>

int main(){


    int marks;
    printf("Please Enter Your Mark Hare: ");
    scanf("%d", &marks);
    if(marks >=80 && marks <=100){
        printf("A+");
    }else if(marks <= 79 && marks >= 70){
        printf("A");
    }else if(marks <= 69 && marks >= 60){
        printf("A-");
    }else if(marks <= 59 && marks >= 50){
        printf("B");
    }else if(marks <= 49 && marks >= 40){
        printf("C");
    }else if(marks <= 39 && marks >= 33){
        printf("D");
    }else{
        printf("F");
    }

    return 0;
}