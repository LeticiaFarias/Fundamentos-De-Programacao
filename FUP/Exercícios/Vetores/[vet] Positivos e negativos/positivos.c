#include <stdio.h>

int main ()
{
    int n, i, cont=0, cont1=0;
    scanf ("%d", &n);
    
    int vet[n];

    for (i=0;i<n;i++){
        scanf ("%d",  &vet[i]);
    }
    for (i=0;i<n;i++){
        if (vet[i]>0)
        cont1++;
    }
      for (i=0;i<n;i++){
        if (vet[i]<0)
        cont++; 
    }  
    printf ("%d %d", cont, cont1);
}