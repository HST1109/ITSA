#include<stdio.h>

int main(){
    int a,b;
    scanf("%d%d",&a,&b);
    if(a==0||b==0){
        printf("no answer\n");
        return 0;
    }else{
        for(int i=0;i<b;i++){
            for(int j=0;j<a;j++){
                printf("*");
            }
            printf("\n");
        }
    }
    return 0;
}