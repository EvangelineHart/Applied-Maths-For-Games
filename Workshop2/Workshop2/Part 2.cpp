#include <stdio.h>
#include <cstdint>

int main(void) {
	unsigned int x = -1;
	signed int y = -300;

	printf("The number x is %u\n", x);
	printf("The number y is %d\n", y);
	printf("\n");

	uint16_t value = 65535;
	
	printf(" the number is %d\n", value);

	value = 65535 + 1;

	printf(" the number is %d\n", value);
	printf("\n");

	int q = 65520;
	printf("the base number is %d\n", q);
	short w = q;
	printf("the first change number is %d\n", w);
	uint8_t e = q;
	printf("the second change number is %d\n", e);
	printf("\n");
	
	const int r = 724;
	printf("%d\n", r);
	printf("\n");
	
	return 0;
}
