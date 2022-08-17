#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <math.h>

double genUnif(double a, double b) {
	double z = (double)rand() / RAND_MAX;
	return a + (b - a) * z;
}

int main() {
	srand(time(NULL));
	double sum = 0, t;
	double theta = 3;
	int sampleSize = 100;
	for (int i = 0; i < sampleSize; i++) {
		t = genUnif(0, theta);
		printf("%.2lf \n", t);
		sum += t;
	}
	printf("%lf\n\n", 2 * sum / sampleSize);


	int CI = 95;
	double var = pow(theta - 0, 2) / 12;
	double MoE = 1.96 * sqrt(var / sampleSize);

	printf("At %d%% margin of error: %.2lf ± %.2lf\n", CI, theta, MoE);
}