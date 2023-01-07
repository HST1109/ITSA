#include<stdio.h>

int main(){
    int a[6],b[6];
    for(int i=0;i<6;i++){
        scanf("%d",&a[i]);
        b[5-i]=a[i];
    }
    printf("%d %d %d %d %d %d\n",b[0],b[1],b[2],b[3],b[4],b[4]);
    return 0;
}