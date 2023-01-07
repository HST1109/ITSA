#include<stdio.h>

int main(){
    int y;
    scanf("%d",&y);
    y=(y-2010)%12;
    y+=2;
    if(y<0){
        y+=12;
    }else if(y>12){
        y%=12;
    }
    if(y==0){
       printf("rat\n"); 
    }else if(y==1){
        printf("ox\n");
    }else if(y==2){
        printf("tiger\n");
    }else if(y==3){
        printf("rabbit\n");
    }else if(y==4){
        printf("dragon\n");
    }else if(y==5){
        printf("snake\n");
    }else if(y==6){
        printf("horse\n");
    }else if(y==7){
        printf("sheep\n");
    }else if(y==8){
        printf("monkey\n");
    }else if(y==9){
        printf("rooster\n");
    }else if(y==10){
        printf("dog\n");
    }else if(y==11){
        printf("pig\n");
    }
}