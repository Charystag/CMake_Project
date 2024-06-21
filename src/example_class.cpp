#include "example_class.h"
/**
 *@file
 *@brief implementation of example class
 */

/**
 *@brief constructor
 *@description sets the value val to 0
 */
example_class::example_class() : val(0) {}

/**
 *@brief getter for the value val
 *@return the value of the variable val
 */
void	example_class::setVal(int value){
	val = value;
}

/**
 *@brief setter for the value val
 *@param the new value to set for the variable val
 */
int	example_class::getVal(){
	return (val);
}
