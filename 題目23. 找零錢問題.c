#include<stdio.h>

int main(){
    int num;
    int a[3];
    int b[3];
    scanf("%d,%d,%d,%d",&num,&a[0],&a[1],&a[2]);
    int sum=15*a[0]+20*a[1]+30*a[2];
    if(sum>num){
        printf("0\n");
    }else{
        num-=sum;
        b[2]=num/50;
        num%=50;
        b[1]=num/5;
        num%=5;
        b[0]=num;
        printf("%d,%d,%d\n",b[0],b[1],b[2]);
    }
    return 0;
}