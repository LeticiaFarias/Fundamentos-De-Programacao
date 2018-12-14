#include <stdio.h>

void Collatz(int n){
    if(n == 1){
       printf("1 "); 
    }else if(n%2 == 0){
        printf("%d ",n);
        Collatz(n/2);
    }else{
        printf("%d ",n);
        Collatz((3*n)+1);
    }
    
}
