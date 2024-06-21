#include "palindrome.h"
#include <cstring>
/**
 *@file
 *@brief tests if a string is a palindrome
 */

/**
 *@brief tests if a string is a palindrome
 *@param s string to test
 *@return 1 if the string is a palindrome
 * and 0 otherwise.
 *@note The empty string is not a palindrome
 */
int	palindrome(const char * s){
	int	len;
	int	beg;

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
