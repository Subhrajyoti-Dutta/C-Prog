#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <math.h>

double genExpo(double lambda) {
	double z = (double)rand() / RAND_MAX;
	return -log(z) / lambda;
}

double myRound(double number, int prec) {
	return round(number * pow(10, prec)) / pow(10, prec);
}

int main() {
	srand(time(NULL));

	double sum = 0, t;
	double lambda = 0.2;
	int sampleSize = 100;

	for (int i = 1; i <= sampleSize; i++) {
		t = myRound(genExpo(lambda), 2);
		printf("%3d %5.2lf\n", i, t);
		sum += t;
	}
	double xbar = sum / sampleSize;
	printf("\n  x̄  = %lf\n", xbar);

	int CI = 95;
	double var = 1 / (lambda * lambda);
	double MoE = 1.96 * sqrt(var / sampleSize);
	double E_x = 1 / lambda;
	printf("E[X] = %lf\n\n", E_x);

	printf("At %d%% margin of error: %.2lf\n", CI, MoE);
	printf("|1/λ - x̄| = %lf\n\n", fabs(E_x - xbar));

	printf("Confidence interval: [ %lf , %lf ]\n", E_x - MoE, E_x + MoE);
}