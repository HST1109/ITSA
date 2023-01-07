#include<stdio.h>

int main(){
    int num;
    while(scanf("%d",&num)!=EOF){
        printf("%.1f\n",(float)num*1.6);
    }
    return 0;
}