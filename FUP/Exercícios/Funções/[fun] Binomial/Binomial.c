#include <stdio.h>

int Fatorial (int n)
{
	int i, fat=1;
	if ((n==0)||(n==1)){
	    return 1;
	}
	
	for (i=n;i>1;i--) {
	    fat = fat * i;
	}
	
	return fat;
	
}

    int Binomial (int n, int k){
      int f1,f2,f3;
      f1=Fatorial(n);
        f2=Fatorial(k);
        f3=Fatorial(n-k);
        return f1/(f2*f3);
}
