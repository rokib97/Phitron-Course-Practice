#include<stdio.h>
int main()
{
    int n,m;
    scanf("%d %d",&n,&m);
    for(int i=n;i!=m;i++){
        if(i==24){
            i=0;
        }
        printf("%d ",i);
    }
    printf("%d",m);
    return 0;
}