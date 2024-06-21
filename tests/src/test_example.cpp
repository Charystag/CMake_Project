#include "test_utils.h"
#include "example_class.h"

void	test_example(){
	example_class	obj;

	assert(obj.getVal() == 0);
	obj.setVal(-2);
	assert(obj.getVal() == -2);
	obj.setVal(4 + 9);
	assert(obj.getVal() == 13);
	obj.setVal(obj.getVal() + 3);
	assert(obj.getVal() == 16);
}

int	main(void){
	test_example();
	return (0);
}
