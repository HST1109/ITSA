#include<stdio.h>

int main(){
    int a[9];
    for(int i=0;i<3;i++){
        scanf("%d,%d,%d",&a[3*i],&a[3*i+1],&a[3*i+2]);
    }
    for(int i=0;i<8;i++){
        for(int j=0;j<8;j++){
            if(a[j]<a[j+1]){
                int temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
    printf("%d\n",a[0]+a[1]+a[2]);
    return 0;
}