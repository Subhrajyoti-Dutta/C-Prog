#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <math.h>

double genUnif(double a, double b) {
	double z = (double)rand() / RAND_MAX;
	return a + (b - a) * z;
}

double myRound(double number, int prec) {
	return round(number * pow(10, prec)) / pow(10, prec);
}

int main() {
	srand(time(NULL));

	double sum = 0, t;
	double theta = 3;
	int sampleSize = 100;

	for (int i = 1; i <= sampleSize; i++) {
		t = myRound(genUnif(0, theta), 2);
		printf("%3d %5.2lf\n", i, t);
		sum += t;
	}
	double xbar = sum / sampleSize;
	printf("\n  x̄  = %lf\n", xbar);

	int CI = 95;
	double var = pow(theta - 0, 2) / 12;
	double MoE = 1.96 * sqrt(var / sampleSize);
	double E_x = theta / 2;
	printf("E[X] = %lf\n\n", E_x);

	printf("At %d%% margin of error: %.2lf\n", CI, MoE);
	printf("|θ/2 - x̄| = %lf\n\n", fabs(E_x - xbar));

	printf("Confidence interval: [ %lf , %lf ]\n", E_x - MoE, E_x + MoE);
}