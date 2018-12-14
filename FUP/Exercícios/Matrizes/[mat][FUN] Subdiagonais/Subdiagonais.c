#include <stdio.h>

int main(){
    int mat[5][5], i,j;
    
    //lendo a matriz
    for(i = 0; i < 5; i++){
        for(j = 0; j < 5; j++){
            scanf("%d", &mat[i][j]);
        }
    }
    
    //verificar a diagonal principal
    int res1 = 0,res2 = 0;
    
    for(i = 0; i < 5; i++){
        res1 += mat[i][i];
    }
    
    //verificar a diagonal secundária
    
    j = 4;
    for(i = 0; i < 5; i++){
        res2 += mat[i][j];
        j--;
    }
    
    //imprimir o resultado
    printf("%d", (res1-res2));
    
    return 0;
}