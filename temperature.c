#include <stdio.h>
int main(){
    int t[31][10],i,j,max,min;
    for(i=0;i<31;i++)
        for(j=0;j<10;j++)
            scanf("%d",&t[i][j]);
    max=min=t[0][0];
    for(i=0;i<31;i++)
        for(j=0;j<10;j++){
            if(t[i][j]>max) max=t[i][j];
            if(t[i][j]<min) min=t[i][j];
        }
    printf("Max=%d Min=%d",max,min);
    return 0;
}