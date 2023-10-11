#include <stdio.h>
#include <stdlib.h>

void loadDataFromFile(const char *filename, double *I);
void loadDataFromFile(const char *filename, double *V);
void loadDataFromFile(const char *filename, double *R);

int
main(int argratio, char *  argv[])
{
	double	I, V, R, ratio;

	loadDataFromFile("I.csv",&I);
	loadDataFromFile("V.csv",&V);
	loadDataFromFile("R.csv",&R);
	printf("I = %lf\n", I);
	printf("V = %lf\n", V);
	printf("R = %lf\n", R);

	double k = 0.00075 ;

	ratio = (2*V)/(k*k*I*I*R*R);
	printf("ratio = %lf\n", ratio);

	return 0;
}

void
loadDataFromFile(const char *filename,double * a)
{
	FILE *  fp;

	fp = fopen(filename, "r");
	if (fp == NULL)
	{
		fprintf(stderr, "Could not open sd0/Signaloid/example-loadDistFromFile/example.csd.\n");

		exit(EXIT_FAILURE);
	}

	fscanf(fp, "%lf\n", a);
}
