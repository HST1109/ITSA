#include<stdio.h>

int main(){
    int n;
    int sum=0;
    while(scanf("%d",&n)!=EOF){
        sum=0;
        for(int i=1;i<=n;i++){
            if(i%3==0){
                sum+=i;
            }
        }
        printf("%d\n",sum);
    }
    return 0;
}