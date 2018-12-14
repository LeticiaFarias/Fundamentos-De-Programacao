#include <stdio.h>
#include <string.h>

int main() {
    char c, aux;
    scanf("%c", &c);
    
    int num;
    scanf("%d", &num);
    
    aux = c + num;
    
    if(aux < 'a') {
        aux = aux + ('z' - 'a' + 1);
        printf("%c", aux);
    }
    else if(aux > 'z') {
        aux = aux - ('z' - 'a' + 1);
        printf("%c", aux);
    }
    else {
    printf("%c", aux);
    }
}