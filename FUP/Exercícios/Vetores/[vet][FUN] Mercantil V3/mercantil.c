#include <stdio.h>

int main (){
    int n,i,v,a=0,b=0;//a contador jogador 1 e b contador jogador 2
    scanf("%d",&n);
    
    char s[n];//vetor caracteres M e m
    double V[n], X[n];//V[n]: chute e X[n]:valor; 
    
    for (i=0;i<n;i++){
        scanf ("%lf ",&X[i]);
    }
    
    for (i=0;i<n;i++){
        scanf("%lf ",&V[i]);
    }
    
    for (i=0;i<n;i++){
        scanf("%c ",&s[i]);
    }
    
    for(i=0;i<n;i++){
          if((V[i]==X[i])||(V[i]<X[i] && s[i]=='m')||(V[i]>X[i] && s[i]=='M')) a++;
          else b++;
    }

    
    if (a>b){
        printf ("primeiro");
        
    }
    else if (a<b){
        printf ("segundo");
    }
    else printf ("empate");
}
