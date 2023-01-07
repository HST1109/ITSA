#include<stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    int a[4];
    a[0]=n/1000;
    n%=1000;
    a[1]=n/100;
    n%=100;
    a[2]=n/10;
    n%=10;
    a[3]=n;
    int temp=a[0];
    a[0]=(a[2]+7)%10;
    a[2]=(temp+7)%10;
    temp=a[1];
    a[1]=(a[3]+7)%10;
    a[3]=(temp+7)%10;
    printf("%d%d%d%d\n",a[0],a[1],a[2],a[3]);
    return 0;
}