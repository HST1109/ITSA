#include<stdio.h>

int main(){
    int a,b;
    int k=1;
    scanf("%d%d",&a,&b);
    int c[a][b];
    for(int i=0;i<a;i++){
        for(int j=0;j<b;j++){
            c[i][j]=k;
            k++;
        }
    }
    for(int i=a-1;i>=0;i--){
        for(int j=b-1;j>=0;j--){
            if(j!=0){
                printf("%d ",c[i][j]);
            }else{
                printf("%d\n",c[i][j]);
            }
        }
    }
}