#include "factorial.h"

int	factorial(int a){
	if (a < 0)
		return (0);
	if (! a)
		return (1);
	return (a * factorial(a - 1));
}
