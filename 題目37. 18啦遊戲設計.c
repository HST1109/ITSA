#include<stdio.h> 
 
int main(){ 
    int a[4]; 
    int count=0; 
    scanf("%d%d%d%d",&a[0],&a[1],&a[2],&a[3]); 
    for(int i=0;i<3;i++){ 
        for(int j=0;j<3;j++){ 
            if(a[j]>a[j+1]){ 
                int temp=a[j]; 
                a[j]=a[j+1]; 
                a[j+1]=temp; 
            } 
        } 
    } 
    for(int i=0;i<3;i++){ 
        if(a[i]==a[i+1]){ 
            count++; 
        } 
    } 
    if(a[0]==a[3]){ 
        printf("WIN\n"); 
    }else if(a[0]==a[2]&&a[2]!=a[3]||count==0){ 
        printf("R\n"); 
    }else{ 
        if(a[0]==a[1]){ 
            printf("%d\n",a[2]+a[3]); 
        }else if(a[1]==a[2]){ 
            printf("%d\n",a[0]+a[3]); 
        }else if(a[2]==a[3]){ 
            printf("%d\n",a[0]+a[1]); 
        } 
    } 
    return 0; 
} 