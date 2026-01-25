#include <stdio.h>
int main(){
    int v[5]={0},n,i,x;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&x);
        if(x>=1 && x<=5) v[x-1]++;
    }
    for(i=0;i<5;i++)
        printf("Candidate %d = %d\n",i+1,v[i]);
    return 0;
}