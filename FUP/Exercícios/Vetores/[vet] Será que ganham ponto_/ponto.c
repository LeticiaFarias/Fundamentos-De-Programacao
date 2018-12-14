#include <stdio.h>

int main()
{
    int n, x, i, j, soma=0, encontrou=0;
    scanf("%d", &n);
    
    int V[n];
    
    for(i=0;i<n;i++) {
        scanf("%d", &V[i]);
    }
    
    scanf("%d", &x);
    
    for(j=0;j<n;j++) {
        for(i=j+1;i<n;i++) {
           soma = V[i] + V[j];
            if(soma == x) {
            encontrou = 1;
            }
        }
    }
    
    if(encontrou == 1){
        printf("sim");
    }
    
    else printf("nao");
    
}