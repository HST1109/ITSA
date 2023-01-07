#include<stdio.h>

int main(){
    int a,b;
    while(scanf("%d",&a)!=EOF){
        scanf("%d",&b);
        if(b==1){
            printf("%.1f\n",(float)(a-80)*0.7);
        }else{
            printf("%.1f\n",(float)(a-70)*0.6);
        }
    }
    return 0;
}