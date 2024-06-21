#include "factorial.h"
/**
 *@file factorial.cpp
 *@brief computes the factorial of a non-negative number
 */

/**
 *@fn factorial
 *@param a the factorial number of compute
 *@return the factorial of the number if 
 *non-negative and 0 otherwise
 */
int	factorial(int a){
	if (a < 0)
		return (0);
	if (! a)
		return (1);
	return (a * factorial(a - 1));
}
