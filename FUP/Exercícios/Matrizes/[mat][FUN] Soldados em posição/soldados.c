#include <stdio.h>

int main()
{
    int mat[3][3], i=0, j=0, cont=0;
    
    while(i < 3) {
        while(j < 3) {
            scanf("%d\n", &mat[i][j]);
            j++;
        }
        i++;
        j=0;
    }
    i=0; j=0;
    
    while(i<2)
    {
        while(j<3)
        {
            if(mat[i][j]>mat[i+1][j])
            {
                cont++;
            }
            j++;
        }
        i++;
        j=0;
    }
    
    printf("%d",cont);
    
    return 0;
}