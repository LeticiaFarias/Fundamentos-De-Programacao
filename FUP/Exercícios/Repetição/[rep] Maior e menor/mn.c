#include <stdio.h>

int main ()
{
    int n, i, maior, menor, num;
    scanf ("%d", &n);
    
    for (i=1; i<=n; i++) {
        scanf ("%d", &num);
        if (i==1){
            
        maior = num;
        menor = num;
        }
        
     if (num>maior){
        maior = num;
     }    
    
    else if (num<menor) {
        menor=num;
    }
        

    }   
    printf ("%d %d",menor, maior);
    
    
}