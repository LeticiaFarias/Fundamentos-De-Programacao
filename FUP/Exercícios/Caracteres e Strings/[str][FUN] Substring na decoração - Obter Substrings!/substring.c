#include <stdio.h>
#include <string.h>

int main () {
    char str[100];
    int inicio, quant, aux;
    
    scanf("%100[^\n]", str);
    scanf("%d\n%d", &inicio, &quant);
    
    for(aux=1; aux<=quant && str[inicio]!='\0'; aux++) {
        printf("%c",str[inicio]);
        inicio=inicio+1;
    }
    return 0;
}