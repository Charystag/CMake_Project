#include "test_utils.h"
#include "fibonacci.h"

int test_fibonacci(){
	assert(fibonacci(-1) == 0);
	assert(fibonacci(0) == 0);
	assert(fibonacci(1) == 1);
	assert(fibonacci(2) == 1);
	assert(fibonacci(3) == 2);
	assert(fibonacci(4) == 3);
	assert(fibonacci(12) == 144);
	return (0);
}
