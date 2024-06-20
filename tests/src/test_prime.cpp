#include "test_utils.h"
#include "prime.h"

void	test_prime(){
	assert(prime(1) == 0);
	assert(prime(-2) == 0);
	assert(prime(2) == 1);
	assert(prime(3) == 1);
	assert(prime(6) == 0);
	assert(prime(8) == 0);
	assert(prime(11) == 1);
	assert(prime(17) == 1);
	assert(prime(22) == 0);
}

int	main(void){
	test_prime();
	return (0);
}
