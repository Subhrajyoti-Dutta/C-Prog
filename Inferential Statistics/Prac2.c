#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <math.h>

double genExpo(double lambda) {
	double z = (double)rand() / RAND_MAX;
	return -log(z) / lambda;
}

int main() {
	srand(time(NULL));
	double sum = 0, t;
	double lambda = 0.2;
	int sampleSize = 100;
	for (int i = 0; i < sampleSize; i++) {
		t = genExpo(lambda);
		printf("%d %.2lf\n", i, t);
		sum += t;
	}
	printf("\nmu = %lf\n\n", sum / sampleSize);

	int CI = 95;
	double var = 1 / (lambda * lambda);
	double MoE = 1.96 * sqrt(var / sampleSize);

	printf("At %d%% margin of error: %.2lf ± %.2lf", CI, 1 / lambda, MoE);
}