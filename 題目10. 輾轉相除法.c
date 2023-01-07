#include<stdio.h>

int main(){
    int a,b;
    while(scanf("%d",&a)!=EOF){
        scanf("%d",&b);
        while(b!=0){
            a%=b;
            int temp=a;
            a=b;
            b=temp;
        }
        printf("%d\n",a);
    }
    return 0;
}