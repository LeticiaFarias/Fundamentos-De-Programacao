#include <stdio.h>

int main(){
    int mat[4][4];
    int j, k,contador = 0;
    int i,vet[6];
    
    //ler as pedras
    for(i = 0; i < 6; i++){
        scanf("%d", &vet[i]);
    }
    
    //ler matriz
    for(i = 0; i < 4; i++){
        for(j = 0; j < 4; j++){
            scanf("%d", &mat[i][j]);
        }
    }

    
    //Verificar as pedras
    for(i = 0; i < 4; i++){
        for(j = 0; j < 4; j++){
            for(k = 0; k < 6; k++){
               if(mat[i][j] == vet[k]){
                    contador++;
                } 
            }
        }
    }
    printf("%d", contador);
    
    
    
    return 0;
}