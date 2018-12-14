#include <stdio.h>

int Fatorial (int n)
{
	int i, fat=1;
	
	for (i=n;i>1;i--) {
	    fat = fat * i;
	}
	
	return fat;
	
}

/* #include <stdio.h>
int main ()
{
	int i, n, fat=1;
	scanf ("%d", &n);
	
	for (i=n;i>=1;i--){
	fat = fat * i;
	}
	printf ("%d", fat);
}


---------------COMO TAVA ANTES---------------
*/
