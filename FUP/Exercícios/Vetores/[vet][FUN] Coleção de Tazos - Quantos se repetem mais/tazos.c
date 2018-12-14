#include <stdio.h>
     int main(){
         int n,i,cont=1,maiorcont=0;
         scanf("%d",&n);
         int vetor[n];
         for(i=0;i<n;i++){
             scanf("%d",&vetor[i]);
         }
         for(i=1;i<n;i++){
           if(vetor[i]==vetor[i-1])cont++;
           else cont=1;
       if(cont>maiorcont)maiorcont=cont;
          
        }cont=1;
       for(i=1;i<n;i++){
           if(vetor[i]==vetor[i-1])cont++;
           else cont=1;
           if(cont==maiorcont)printf("%d ",vetor[i]);
          }
     }