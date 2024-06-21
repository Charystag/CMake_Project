#include "example_class.h"

example_class::example_class() : val(0) {}

void	example_class::setVal(int value){
	val = value;
}

int	example_class::getVal(){
	return (val);
}
