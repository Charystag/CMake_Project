#include "factorial.h"
#include "test_utils.h"

void	test_factorial(){
	assert(factorial(-1) == 0);
	assert(factorial(2) == 2);
	assert(factorial(3) == 6);
	assert(factorial(4) == 24);
	assert(factorial(5) == 120);
	assert(factorial(6) == 720);
}

int	main(void){
	test_factorial();
	return (0);
}
