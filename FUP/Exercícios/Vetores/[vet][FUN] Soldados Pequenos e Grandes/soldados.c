#include <stdio.h>

int main ()
{
    int n;
    double media=0.0;
    scanf ("%d", &n);
    
    double vet[n];
    int i;
    
    for (i=0; i<n; i++) {
        scanf ("%lf", &vet[i]);
        media=media+vet[i];
    }
    
    media=media/n;
    printf ("%.2lf\n", media);
    
    for (i=0; i<n; i++){
        if (vet[i]<media) printf ("P ");
        else if (vet[i]>media) printf ("G ");
        else printf ("M ");
    }
}