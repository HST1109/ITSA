#include<stdio.h>

int main(){
    int a[3];
    scanf("%d%d%d",&a[0],&a[1],&a[2]);
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            if(a[j]>a[j+1]){
                int temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
    if(a[0]+a[1]>a[2]){
        printf("Bigger than the third side\n");
    }else{
        printf("Less than the third side\n");
    }
    return 0;
}