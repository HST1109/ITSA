#include<stdio.h>

int main(){
    int a,b,c;
    while(scanf("%d%d%d",&a,&b,&c)!=EOF){
        printf("Trapezoid area:%.1f\n",(float)(a+b)/2*c);
    }
    return 0;
}