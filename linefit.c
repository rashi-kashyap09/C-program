#include <stdio.h>
int main() {
    int n,i;
    float x[20],y[20],sx=0,sy=0,sxy=0,sx2=0,m,c;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%f%f",&x[i],&y[i]);
        sx+=x[i]; sy+=y[i];
        sxy+=x[i]*y[i];
        sx2+=x[i]*x[i];
    }
    m=(n*sxy-sx*sy)/(n*sx2-sx*sx);
    c=(sy-m*sx)/n;
    printf("y=%.2fx+%.2f",m,c);
    return 0;
}