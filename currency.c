#include <stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    printf("500=%d\n",a/500); a%=500;
    printf("200=%d\n",a/200); a%=200;
    printf("100=%d\n",a/100); a%=100;
    printf("50=%d\n",a/50); a%=50;
    printf("10=%d\n",a/10); a%=10;
    printf("1=%d\n",a);
    return 0;
}