#include <stdio.h>

int main()
{
    int n, x, i, j;
    
    scanf("%d", &n);
    int vet[n];
    
    for(i = 0; i < n; i++){
        scanf("%d",&vet[i]);
    }
    
    for(j=0;j<n-1;j++) {
        for(i = 0; i < n-1; i++){
            if(vet[i]>vet[i+1]) {
                x = vet[i];
                vet[i] = vet[i+1];
                vet[i+1] = x;
            }
        }
    }
    
    for(i = 0; i < n; i++){
        printf("%d ",vet[i]);
    }
    
}
