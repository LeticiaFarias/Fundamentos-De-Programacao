#include <stdio.h>
#include <math.h>


int main ()
{
    float a,b,c,delta,x1,x2;

   // printf("digite o valor de a:\n");
    scanf("%f", &a);
    //printf("A = %f\n", a);
    //printf("digite o valor de b:\n");
    scanf("%f", &b);
    //printf("digite o valor de c:\n");
    scanf("%f", &c);

    if (a!=0){
        delta = (b*b) -4*a*c;
    }

    if (delta ==0){
        x1= (-b + sqrt (delta))/(2*a);
       // printf ("delta eh igual a 0\n");
        printf("%.2f",x1);
    }
    else if (delta >0) {
        x1= (-b + sqrt (delta))/(2*a);
        x2= (-b - sqrt (delta))/(2*a);
        printf ("%.2f\n", x1);
        printf ("%.2f", x2);
    }
   else if(delta <0){
        //printf("delta eh menor que 0\n");
        printf ("nao ha raiz real");
    }


    
    
    return 0;
}
