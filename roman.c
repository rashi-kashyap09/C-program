#include <stdio.h>
#include <string.h>
int val(char c){
    if(c=='I')return 1;
    if(c=='V')return 5;
    if(c=='X')return 10;
    if(c=='L')return 50;
    if(c=='C')return 100;
    if(c=='D')return 500;
    if(c=='M')return 1000;
    return 0;
}
int main(){
    char r[20];
    int i,sum=0;
    scanf("%s",r);
    for(i=0;i<strlen(r);i++){
        if(val(r[i])<val(r[i+1]))
            sum-=val(r[i]);
        else
            sum+=val(r[i]);
    }
    printf("%d",sum);
    return 0;
}