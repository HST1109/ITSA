#include<stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    float a=0,b=0;
    if(n>=701){
        a+=(n-700)*5.63;
        b+=(n-700)*4.5;
        n=700;
    }
    if(n>=501){
        a+=(n-500)*4.97;
        b+=(n-500)*4.01;
        n=500;
    }
    if(n>=331){
        a+=(n-330)*4.39;
        b+=(n-330)*3.61;
        n=330;
    }
    if(n>=121){
        a+=(n-120)*3.02;
        b+=(n-120)*2.68;
        n=120;
    }
    if(n>0){
        a+=n*2.1;
        b+=n*2.1;
    }
    printf("Summer months:%.2f\n",a);
    printf("Non-Summer months:%.2f\n",b);
}