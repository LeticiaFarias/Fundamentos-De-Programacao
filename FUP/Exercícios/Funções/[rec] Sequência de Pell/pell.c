#include <stdio.h>

int Pell(int n) {
    if (n == 0) {
        return 0;
    }
    else if (n == 1) {
        return 1;
    }
     
    return 2 * Pell (n - 1) + Pell (n - 2);
    
}