/* ldexp example */
#include <stdio.h>      /* printf */
#include <math.h>       /* ldexp */
#include <conio.h>

/*	Source by CPlusPlus	
	Modified For Learn by Rizky Khapidsyah
	I.D.E : VS2019 */

int main() {
	double param, result;
	int n;

	param = 0.95;
	n = 4;
	result = ldexp(param, n);
	printf("%f * 2^%d = %f\n", param, n, result);

	_getch();
	return 0;
}