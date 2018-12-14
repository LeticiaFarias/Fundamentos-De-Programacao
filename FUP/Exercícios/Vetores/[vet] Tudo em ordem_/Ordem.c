# include <stdio.h>

int main () {
    int n, i, a=0, b=0, c=0;
    
    scanf("%d", &n);
    int v[n];
    
    for (i=0; i<n; i++) {
        scanf("%d", &v[i]);
    }
    
    for (i=0; i<n-1; i++) {
        if (v[i]>v[i+1]) b++;
    }
    
    if (b>0) {
        printf("nao");
    }
    
    else printf("sim");

}