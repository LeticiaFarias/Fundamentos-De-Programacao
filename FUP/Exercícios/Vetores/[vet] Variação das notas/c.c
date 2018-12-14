/*#include <stdio.h>

int main ()
{
    
    int i,n;
    int vet[n];
    double nota;
    int maior, menor;
    
    maior=vet[0];
    menor=vet[0];
    
    scanf ("%d %lf", &vet[i], &nota);
        for (i=0; i<maior; i++){
        scanf ("%d", &vet[i]); {
            if (vet[i]>maior){
                vet[i]=maior;
            }
            if (vet[i]<menor){ 
                vet[i]=menor;
            }   
        }
        nota = maior-menor;
    }
    
    printf ("%.1lf", nota);
    
    
    
}*/

/* -----------------------------------CONCERTAR DEPOIS--------------------------------*/

#include <stdio.h>
int main (){
    int n;
    float a, b; 
    float diferenca=0.0;
    scanf ("%d", &n);
    float vet[n];
    int i;
    for (i=0;i<n;i++) {
        scanf ("%f", &vet[i]);
            if (i==0){
                a=vet[i];
                b=vet[i];
            }
            
            if (a>vet[i]){
                a=vet[i];
            }
            
            if (b<vet[i]){
                b= vet[i];
            }
    }
    
    printf ("%.1f", b-a);

}