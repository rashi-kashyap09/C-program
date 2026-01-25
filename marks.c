#include <stdio.h>
int main(){
    int m[100][3],i,j,sum;
    for(i=0;i<100;i++)
        for(j=0;j<3;j++)
            scanf("%d",&m[i][j]);
    for(i=0;i<100;i++){
        sum=0;
        for(j=0;j<3;j++)
            sum+=m[i][j];
        printf("Student %d Total=%d\n",i+1,sum);
    }
    return 0;
}