#include <stdio.h>

int main(){
    int matriz[2][3];
    int i = 0, j = 0, soma = 0;
    
    for(i = 0; i < 2; i++){
        for(j = 0; j < 3; j++){
            scanf("%d", &matriz[i][j]);
        }
    }
    for(i = 0; i < 2; i++){
        for(j = 0; j < 3; j++){
            soma = soma + matriz[i][j];
        }
    }
    printf("%d", soma);
    return 0;
}