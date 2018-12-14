#include<stdio.h>

int main()
{
    int n,i,a=0,j,b=0;
    scanf("%d",&n);
    int v[n];
    
    for(i=0;i<n;i++){
        scanf("%d",&v[i]);
    }
    for(j=0;j<n-1;j++){
        for(i=0;i<n;i++){
            if(v[i]>v[i+1]){
                a=v[i];
                v[i]=v[i+1];
                v[i+1]=a;
            }
        }
    }
        for(i=0;i<n;i++){
       if(v[i]<v[i+1])b++;
    }
    printf("%d",b);
}