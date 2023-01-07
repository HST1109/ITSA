#include<stdio.h>

int main(){
    int n;
    while(scanf("%d",&n)!=EOF){
        if(n==-1){
            return 0;
        }
        printf("%.1f\n",(float)1/3*n*n*n);
    }
    return 0;
}