/*
Question: Write a program for fitting a straight line through the following set of points:
		+----+----+----+----+----+----+----+
		|  X |  2 |  4 |  5 |  6 |  8 | 11 |
		+----+----+----+----+----+----+----+
		|  Y | 18 | 12 | 10 |  8 |  7 |  5 |
		+----+----+----+----+----+----+----+
*/

#include <stdio.h>

int main() {
	int points[2][6] = {
		{ 2,  4,  5,  6,  8, 11},
		{18, 12, 10,  8,  7,  5}
	};
	double xi, yi, sxi = 0, syi = 0, sxi2 = 0, sxiyi = 0;
	double m, c;
	int i, n = 6;
	for (i = 0; i < n; i++) {
		xi = points[0][i];
		yi = points[1][i];

		sxi += xi;
		sxi2 += xi * xi;
		syi += yi;
		sxiyi += xi * yi;
	}
	m = (n * sxiyi - sxi * syi) / (n * sxi2 - sxi * sxi);
	c = (syi * sxi2 - sxi * sxiyi) / (n * sxi2 - sxi * sxi);
	printf("The best fitting line is: ");
	printf("y = %lfx + %lf\n", m, c);
}

/*
Output:
		The best fitting line is: y = -1.340000x + 18.040000
*/