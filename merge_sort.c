#include <stdio.h>
int main(){
    int a[10],b[10],c[20],i,j,n,m,k=0,temp;
    scanf("%d",&n);
    for(i=0;i<n;i++) scanf("%d",&a[i]);
    scanf("%d",&m);
    for(i=0;i<m;i++) scanf("%d",&b[i]);
    for(i=0;i<n;i++) c[k++]=a[i];
    for(i=0;i<m;i++) c[k++]=b[i];
    for(i=0;i<k;i++)
        for(j=i+1;j<k;j++)
            if(c[i]>c[j]){
                temp=c[i]; c[i]=c[j]; c[j]=temp;
            }
    for(i=0;i<k;i++) printf("%d ",c[i]);
    return 0;
}