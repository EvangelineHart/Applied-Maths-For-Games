#include <stdio.h>
#include <cstdint>
#include <math.h>

int main(void)
{
	float x1;
	float x2;
	float y1;
	float y2;

	printf("please imput two sets of coordinates (x y)\n");
	scanf_s("%f %f", &x1,&y1);
	scanf_s("%f %f", &x2,&y2);
	printf("%f %f and %f %f\n", x1,y1,x2,y2);

	float hyp = sqrt(pow((x1 - x2),2)) + (pow((y1 - y2),2));
	
	
	
	return 0;
}
