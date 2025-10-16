#include <stdio.h>
#include <cstdint>

int main(void) {
	
	int x = 10 ;
	short y = 20000 ;
	long z = 3000000 ;
	long long a = 4000000000 ;

	printf("The int is %d\n", x);
	printf("The short is %d\n", y);
	printf("The long is %d\n", z);
	printf("The long long is %lld\n", a);
	return 0;
}
