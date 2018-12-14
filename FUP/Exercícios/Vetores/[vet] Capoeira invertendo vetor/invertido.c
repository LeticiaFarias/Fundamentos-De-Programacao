/*#include <stdio.h>
int main ()
{
    int i, n, elementos;
    scanf ("%d %d", &n, &elementos);
    int vet[n];
    
    for (i=0;i<n;i++){
        scanf ("%d", &vet[i]);
    }
        
        for (i=n-1;i>=0;i--){
            printf("%d", i);
            printf ("%d ", vet[i]);
        }
            
}*/

#include <stdio.h>
int main ()
{
    int i, n;
    scanf ("%d", &n);
    int vet[n];
    
    for(i = 0; i < n; i++){
        scanf ("%d", &vet[i]);
    }
        
    for (i = n-1; i >= 0; i--){
        printf ("%d ", vet[i]);
    }
            
}