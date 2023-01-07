#include<stdio.h>

int main(){
    int a,b,c,d,e;
    scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
    int value=a+2*(b+c+d-e);
    if(value>=45){
        printf("A\n");
    }else if(value>=35&&value<=44){
        printf("B\n");
    }else if(value>=25&&value<=34){
        printf("C\n");
    }else{
        printf("D\n");
    }
    return 0;
}