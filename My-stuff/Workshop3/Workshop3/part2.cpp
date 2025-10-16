#include <stdio.h>
#include <cstdint>
#include <math.h>

int main(void) {
	float a = 5.68f;
	float b = 6.5f;
	double c = 6.55555555555;


	float AB = a + b;
	float BC = a + c;
	float fl = 52.565656f;
	double dou = 52.565656;

	printf("a+b = %f\n", AB);
	printf("a+c = %lf\n", BC);
	printf("52.565656 as a float = %f\n", fl);
	printf("52.565656 as a double = %lf\n", dou);
	printf("\n");

	float puf;

	printf("input a float, please\n");
	scanf_s("%f", &puf);
	
	float sq = sqrt(puf);
	float pw3 = pow(puf, 3);

	printf("square root = %f	", sq);
	printf("and to th power of 3 = %f \n",pw3);
	
	float ce =ceil(puf);
	float flo =floor(puf);
	float ro =round(puf);
	
	printf("ceiling= %f	",ce);
	printf("floor= %f	", flo);
	printf("	normal rounding = %f\n", ro);

	float logn = log(puf);
	float log1 = log10(puf);
	float ex = exp(puf);
	printf("log= %f		", logn);
	printf("log10= %f\n", log1);
	printf("exponent= %f\n", ex);
	
	return 0;
}
