#ifndef __EXAMPLE_CLASS_H__
# define __EXAMPLE_CLASS_H__
/**
 *@file
 *@brief implementation of example class
 */

/**
 *@class example
 *@brief an example class
 *@description this example class allows 
 *to showcase how to include classes in 
 *unit tests
 */
class	example_class{
	int	val; /**an integer value to be set an retrieved*/

	public:
		/**
		 * constructor
		 * sets the value val to 0
		 */
		example_class();

		/**
		 *@brief getter for the value val
		 *@return the value of the variable val
		 */
		int		getVal();

		/**
		 *@brief setter for the value val
		 *@param the new value to set for the variable val
		 */
		void	setVal(int);
};

#endif
