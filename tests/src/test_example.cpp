#include "test_utils.h"
#include "example_class.h"

void	test_example(){
	example_class	obj;

	assert(obj.getValue() == 0);
	obj.setValue(-2);
	assert(obj.getValue() == -2);
	obj.setValue(4 + 9);
	assert(obj.getValue() == 13);
	obj.setValue(obj.getValue() + 3);
	assert(obj.getValue() == 16);
}

int	main(void){
	test_example();
	return (0);
}
