#include <stdio.h>
#include <uxhw.h>

int main(int argc, char *  argv[])
{
	double	I, V, R, ratio;

	I = UxHwDoubleGaussDist(1.4, 0.1);
	printf("I = %lf\n", I);

	V = UxHwDoubleGaussDist(82.8,2.0);
	printf("V = %lf\n", V);

	R = UxHwDoubleGaussDist(0.0292,0.0011);
	printf("R = %lf\n", R);

    double k = 0.00075 ;

    ratio = (2*V)/(k*k*I*I*R*R);
    printf("ratio = %lf\n", ratio);

#ifdef DEBUG
	printf("debug message\n");
#endif

	return 0;
}
