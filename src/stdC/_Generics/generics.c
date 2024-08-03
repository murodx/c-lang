#include <stdio.h>

#define define_sum(T) T sum_##T(T a, T b) {\
	return a + b; \
}

// макрос устанавливает вызов определенной функции
#define sum(T) sum_##T

define_sum(int)
define_sum(float)

int main() {
	printf("float: %f\n",sum(float)(3.0,2.0));	
	printf("int: %d\n",sum(int)(3,2));
	return 0;
}
