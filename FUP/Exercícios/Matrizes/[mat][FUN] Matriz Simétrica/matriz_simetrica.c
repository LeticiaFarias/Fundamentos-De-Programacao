#include <stdio.h>

int main(){
    int matriz[3][3],i = 0,j = 0;
    
    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++){
            scanf("%d",&matriz[i][j]);
        }
    }
    
    i = 0; 
    j = 0;
    
    //váriave que conta a qtd de casos onde mat[i][j] = mat[j][i]
    int contador = 0;
    
    while(i < 3){
        
        j = 0;
        
        while(j < 3){
           if(matriz[i][j] == matriz[j][i]){
               contador++;
           } 
           j++;
        }
        i++;
    }
    
    if(contador == 9){
        printf("sim");
    }else{
        printf("nao");
    }
    
    return 0;
}
