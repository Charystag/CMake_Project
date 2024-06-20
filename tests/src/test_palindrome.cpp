#include "test_utils.h"
#include "palindrome.h"

void	test_palindrome(){
	assert(palindrome("boob") == 1);
	assert(palindrome("2aba2") == 1);
	assert(palindrome("aibohphobia") == 1);
	assert(palindrome("Not a palindrome") == 0);
	assert(palindrome("") == 0);
	assert(palindrome(" ") == 1);
}

int	main(void){
	test_palindrome();
	return (0);
}
