#include "fibonacci.h"
/**
 *@file 
 *@brief computes a number in the sequence of
 *fibonacci numbers
 */

/**
 *@brief computes the ath number of the fibonacci sequence
 *@details The sequence starts with 0, 1, 1, 2, 3, 5
 *Make some researches about memoization (not memorization) to 
 *understand the solution to this exercise
 *@param a the position of the number in the sequence
 *@return 0 if the number is < 1, the term number a in the 
 *sequence otherwise
 */
int	fibonacci(int a){
	static int	terms[100];

	if (a < 0)
		return (0);
	if (! a)
		return (0);
	if (a < 3)
		return (1);
	if (a > 99)
		return (0);
	if (terms[a] != 0)
		return (terms[a]);
	terms[a] = fibonacci(a - 1) + fibonacci(a - 2);
	return (terms[a]);
}
