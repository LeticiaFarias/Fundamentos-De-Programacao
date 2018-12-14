#include <stdio.h>

int main ()
{
    int data1, data2, D1, M1, A1, D2, M2, A2;
    
    scanf ("%d %d %d %d %d %d", &D1, &M1, &A1, &D2, &M2, &A2);
    
    if ((A1 > A2) || (A1 == A2 && M1 > M2) || (A1 == A2 && M1 == M2 && D1 > D2)){
        printf ("data 2");
    }
    
    else if (A1 == A2 && M1 == M2 && D1 == D2){
        printf ("iguais");
    }
    
    else {
        printf ("data 1");
    }
    
     return 0;
    
    
    
    
    

}