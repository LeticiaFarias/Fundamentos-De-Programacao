# include <stdio.h>
# include <stdlib.h>

int Fatorial(int n) {

int fat=1, i;


for (i=n; i>=1; i--) {
    fat=fat*i;
}
return fat;
}

int Binomial(int n, int k) {

int f1, f2, f3;

f1=Fatorial(n);
f2=Fatorial(k);
f3=Fatorial(n-k);
return f1/(f2*f3);
}

void LinhaTriangulo(int n) {
    
int i;

 for(i=0;i<=n;i++) {
    
 printf("%d ", Binomial(n,i));
}

}