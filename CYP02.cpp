#include <stdio.h>

int main()
{

	int valordec;
	int pixel;


	scanf_s("%i", &valordec);
	scanf_s("%i", &pixel);

	printf("BM%08X00000000%08X, i", valordec, pixel);
		 
	return 0;
}




