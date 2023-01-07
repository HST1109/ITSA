#include<stdio.h>
#include<string.h>

int main(){
    char string[1000];
    int a[26];
    fgets(string,1000,stdin);
    for(int i=0;i<26;i++){
        a[i]=0;
    }
    for(int i=0;i<strlen(string);i++){
        if(string[i]=='a'||string[i]=='A'){
            a[0]++;
        }else if(string[i]=='b'||string[i]=='B'){
            a[1]++;
        }else if(string[i]=='c'||string[i]=='C'){
            a[2]++;
        }else if(string[i]=='d'||string[i]=='D'){
            a[3]++;
        }else if(string[i]=='e'||string[i]=='E'){
            a[4]++;
        }else if(string[i]=='f'||string[i]=='F'){
            a[5]++;
        }else if(string[i]=='g'||string[i]=='G'){
            a[6]++;
        }else if(string[i]=='h'||string[i]=='H'){
            a[7]++;
        }else if(string[i]=='i'||string[i]=='I'){
            a[8]++;
        }else if(string[i]=='j'||string[i]=='J'){
            a[9]++;
        }else if(string[i]=='k'||string[i]=='K'){
            a[10]++;
        }else if(string[i]=='l'||string[i]=='L'){
            a[11]++;
        }else if(string[i]=='m'||string[i]=='M'){
            a[12]++;
        }else if(string[i]=='n'||string[i]=='N'){
            a[13]++;
        }else if(string[i]=='o'||string[i]=='O'){
            a[14]++;
        }else if(string[i]=='p'||string[i]=='P'){
            a[15]++;
        }else if(string[i]=='q'||string[i]=='Q'){
            a[16]++;
        }else if(string[i]=='r'||string[i]=='R'){
            a[17]++;
        }else if(string[i]=='s'||string[i]=='S'){
            a[18]++;
        }else if(string[i]=='t'||string[i]=='T'){
            a[19]++;
        }else if(string[i]=='u'||string[i]=='U'){
            a[20]++;
        }else if(string[i]=='v'||string[i]=='V'){
            a[21]++;
        }else if(string[i]=='w'||string[i]=='W'){
            a[22]++;
        }else if(string[i]=='x'||string[i]=='X'){
            a[23]++;
        }else if(string[i]=='y'||string[i]=='Y'){
            a[24]++;
        }else if(string[i]=='z'||string[i]=='Z'){
            a[25]++;
        }
    }
    for(int i=0;i<26;i++){
        if(i!=25){
            printf("%d ",a[i]);
        }else{
            printf("%d\n",a[i]);
        }
    }
}