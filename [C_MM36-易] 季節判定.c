#include<stdio.h>
#include<math.h>

int main(){
    int m;
    while(scanf("%d",&m)!=EOF){
        if(m<=5&&m>=3){
            printf("Spring\n");
        }else if(m>=6&&m<=8){
            printf("Summer\n");
        }else if(m>=9&&m<=11){
            printf("Autumn\n");
        }else{
            printf("Winter\n");
        }
    }
    return 0;
}