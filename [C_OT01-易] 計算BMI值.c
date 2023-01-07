#include<stdio.h>

int main(){
    float a,b;
    scanf("%f%f",&a,&b);
    float BMI=b/(a/100)/(a/100);
    printf("%.2f\n",BMI);
    if(BMI>=35){
        printf("Obese Class III\n");
    }else if(BMI>=30&&BMI<35){
        printf("Obese Class II\n");
    }else if(BMI>=27&&BMI<30){
        printf("Obese Class I\n");
    }else if(BMI>=24&&BMI<27){
        printf("Overweight\n");
    }else if(BMI>=18.5&&BMI<24){
        printf("Normal\n");
    }else{
        printf("Underweight\n");
    }
    return 0;
}