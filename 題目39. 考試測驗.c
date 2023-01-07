#include<stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    int a[3];
    for(int i=0;i<n;i++){
        scanf("%d%d%d",&a[0],&a[1],&a[2]);
        int sum=a[0]+a[1]+a[2];
        for(int j=0;j<2;j++){
            for(int k=0;k<2;k++){
                if(a[k]>a[k+1]){
                    int temp=a[k];
                    a[k]=a[k+1];
                    a[k+1]=temp;
                }
            }
        }
        if(a[0]>=60||a[0]<60&&a[1]>=60&&sum>=220){
            printf("P\n");
        }else if(a[0]<60&&a[1]>=60&&sum<220||a[2]>=80&&a[1]<60){
            printf("M\n");
        }else{
            printf("F\n");
        }
    }
    return 0;
}