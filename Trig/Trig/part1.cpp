#include <stdio.h>
#include <cstdint>
#include <math.h>

int main(void) {
	
	const float pi = 3.141593f;
	
	float angle1 = 40.0f;
	printf("the angle is %0.2f degrees\n",angle1);
	
	float angle1InRadians = angle1 * pi / 180.0f;
	printf("the angle is %f radians\n",angle1InRadians);

	float angle1InDegrees = angle1InRadians * 180.0f / pi;

	printf("the angle is %0.2f degrees\n", angle1InDegrees);
	printf("\n");

	float radian1 = pi / 4;
	
	printf("the sin of pi/4 is %f\n", sin(radian1));
	printf("\n");

	float angle2 = 60;
	float angle2InRadians = angle1 * pi / 180.0f;
	printf("the cos of 60 degrees in radians is %f\n", cos(angle2InRadians));
	return 0;
}
