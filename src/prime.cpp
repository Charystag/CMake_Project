#include "prime.h"
#include <cmath>

int	prime(int a){
	int	sqroot;
	int	i;

	if (a < 2)
		return (0);
	sqroot = std::sqrt(a) + 1;
	i = 2;
	while (i < sqroot){
		if (a % i == 0)
			return (0);
		++i;
	}
	return (1);
}