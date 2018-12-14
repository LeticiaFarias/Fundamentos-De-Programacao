#include <stdio.h>
#include <stdlib.h>


int main(){
    float satual, total;
    
    scanf("%f", &satual);
    
    if(satual <= 1000){
        total = (satual + (satual * (0.20)));
        
    }
    else if(satual > 1000 && satual <= 1500){
        total = satual + (satual * (0.15));
        
    }
    else if(satual > 1500 && satual <= 2000){
        total = satual + (satual * (0.10));
        
    }
    else if(satual > 2000){
        total = satual + (satual * (0.05));
        
    }   
    else{
        printf("invalido");
    }
    printf("%.2f", total);

    return 0;    
}