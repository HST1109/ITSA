#include<stdio.h>

int main(){
    int a,b;
    while(scanf("%d%d",&a,&b)!=EOF){
        printf("%.1f\n",(float)a*b/2);
    }
    return 0;
}