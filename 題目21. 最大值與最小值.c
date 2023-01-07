#include<stdio.h>

int main(){
    float a[10];
    float min=99999,max=0;
    for(int i=0;i<10;i++){
        scanf("%f",&a[i]);
        if(a[i]>max){
            max=a[i];
        }
        if(a[i]<min){
            min=a[i];
        }
    }
    printf("maximum:%.2f\n",max);
    printf("minimum:%.2f\n",min);
    
}