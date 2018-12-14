#include <stdio.h>
int main() {
    int cont[256], cont2[256], i, flag = 0; /*cont e cont2 servem para ver o numero de vezes que cada letra aparece*/
    char p1[30], p2[30];					/* palavra 1 e palavra 2*/
    scanf("%s %s", p1, p2);
    
    for (i = 0; i < 256; i++) {	 /*zera o vetor que conta as letras da primeira palavra*/
	    cont[i] = 0;
    }
    
    for (i = 0; i < 256; i++) {	 /*zera o vetor que conta as letras da segunda palavra*/
	    cont2[i] = 0;
    }
    
    for (i = 0; p1[i] != '\0'; i++) {	   /*percorre a primeira palavra*/
	    cont[p1[i]]++;					   /*conta quantas vezes cada letra da palavra aparece*/
    }
    
    
    for (i = 0; p2[i] != '\0'; i++) {		 /*percorre a segunda palavra*/
	    cont2[p2[i]]++;						/* conta quantas vezes cada letra da palavra aparece*/
    }
    
    for (i = 0; i < 256; i++) {				  /*percorre o vetor que conta letras*/
	    if (cont[i] != cont2[i]) {	 /* se o numero de vezes que uma letra ocorre na palavra 1 eh diferente da palavra 2 flag recebe1*/
		    flag = 1;                   /* significa que não são anagramas*/
	    }
    }
    
    if (flag == 0) {
	    printf("sim");
    }
    
    else {
	    printf("nao");
    }
    
    return 0;
}