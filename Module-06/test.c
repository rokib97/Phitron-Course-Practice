#include<stdio.h>
int main()
{
    int balls_faced,runs_scored;
    float strike_rate;
    printf("Enter the how many runs the scored:");
    scanf("%d",&runs_scored);
    printf("Enter the how many faced the balls:");
    scanf("%d",&balls_faced);
    strike_rate= (runs_scored / balls_faced) * 100;
    printf("Show the batsman strike rate:%f\n",strike_rate);
    return 0;


}