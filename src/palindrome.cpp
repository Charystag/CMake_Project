#include "palindrome.h"
#include <cstring>
#include <iostream>

int	palindrome(const char * s){
	int	len;
	int	beg;

	len = std::strlen(s);
	if (! len)
		return (0);
	std::cout << "this is the length : " << len << std::endl;
	beg = 0;
	--len;
	while (beg <= len){
		if (*(s + beg) != *(s + len))
			return (0);
		--len;
		++beg;
	}
	return (1);
}
