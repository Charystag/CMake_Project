#include "fibonacci.h"

/*
Make some researches about memoization (not memorization) to 
understand the solution to this exercise
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
