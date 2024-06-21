#include "prime.h"
#include <cmath>
/**
 *@file
 *@brief tells if a number is prime
 */

/**
 *@param a the number to test
 *@return 1 if the number is prime and 0 otherwise
 */
int	prime(int a){
	double	sqroot;
	int	i;

	if (a < 2)
		return (0);
	sqroot = std::sqrt(a);
	i = 2;
	while (i < sqroot){
		if (a % i == 0)
			return (0);
		++i;
	}
	return (1);
}
