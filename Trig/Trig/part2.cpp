#include <stdio.h>
#include <cstdint>
#include <math.h>

int main(void) {
	
	const float pi = 3.141593f;

	float pickupX = 15.0f;
	float pickupY = 7.0f;
	float playerX = 5.5f;
	float playerY = 3.0f;

	float x(pickupX - playerX);
	float y(pickupY - playerY);
	float slope = x / y;
	printf("distance = %f\n", slope);
	float winner = atan2(y,x);
	printf("angle in radians = %f\n", winner);

	return 0;
}
