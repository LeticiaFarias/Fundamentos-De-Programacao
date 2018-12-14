# include <stdio.h>
# include <string.h>
# include <ctype.h>

int main () {
    int tam;
    char texto[100], c;
    
    scanf("%100[^\n]\n", texto);
    scanf("%c", &c);
    
    for(int i=0; i<strlen(texto); i++) {
        if(c=='M')  texto[i]=toupper(texto[i]);
        if(c=='m')  texto[i]=tolower(texto[i]);
        if(c=='i') {
            if(isupper(texto[i])) texto[i]=tolower(texto[i]);
            else if(islower(texto[i])) texto[i]=toupper(texto[i]);
        }
        if(c=='p') {
            if(i==0){
                if(isupper(texto[i])) texto[i]=tolower(texto[i]);
            }
                else if((texto[i-1] == ' ') && (texto[i+1] == ' ')) texto[i]=tolower(texto[i]);
                else {
                    if(texto[i-1]==' ')texto[i]=toupper(texto[i]);
                }
            }
        }
    printf("%s", texto);
}