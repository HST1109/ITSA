#include<stdio.h>

int main(){
    int a,b;
    scanf("%d%d",&a,&b);
    if(a==0||b==0){
        return 0;
    }
    int c[a][b];
    for(int i=0;i<a;i++){
        for(int j=0;j<b;j++){
            scanf("%d",&c[i][j]);
        }
    }
    for(int j=0;j<b;j++){
        for(int i=0;i<a;i++){
            if(i!=a-1){
                printf("%d ",c[i][j]);
            }else{
                printf("%d\n",c[i][j]);
            }
        }
    }
    return 0;
}