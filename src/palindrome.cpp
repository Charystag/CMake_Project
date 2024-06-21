#include "palindrome.h"
#include <cstring>

int	palindrome(const char * s){
	size_t	len;
	size_t	beg;

	len = std::strlen(s);
	if (! len)
		return (0);
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
