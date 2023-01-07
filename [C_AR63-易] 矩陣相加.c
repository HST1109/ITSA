#include<stdio.h>

int main(){
    int a,b;
    scanf("%d%d",&a,&b);
    int c[a][b];
    for(int i=0;i<a;i++){
        for(int j=0;j<b;j++){
            scanf("%d",&c[i][j]);
        }
    }
    scanf("%d%d",&a,&b);
    int d[a][b];
    int e[a][b];
    for(int i=0;i<a;i++){
        for(int j=0;j<b;j++){
            scanf("%d",&d[i][j]);
            e[i][j]=c[i][j]+d[i][j];
        }
    }
    for(int i=0;i<a;i++){
        for(int j=0;j<b;j++){
            if(j!=b-1){
                printf("%d ",e[i][j]);
            }else{
                printf("%d\n",e[i][j]);
            }
        }
    }
    return 0;
}