/*****************************************
* Stack pointers lesson
*****************************************/

#include <iostream>

int main()
{
	// Creating the point that points to val.
	int val = 90;
	int* ptr = &val;

	// We use dereference operator to access the location point is pointing to
	*ptr = 0;
	std::cout << *ptr << std::endl;

	// We can change where point is pointing
	int val1 = 0;
	ptr = &val1;

	// You can even assign pointer to another and you don't dereference.
	int* ptr1 = ptr;
	ptr = ptr1;

	// You can't change the value of variable using point with const before asterisk
	// but you can change the address pointer is pointing to.
	const int* cPtr = &val;
	*cPtr = 90; // error
	cPtr = &val1;

	// You can't change the address point with const after asterisk but you can change
	// the value it's pointing to.
	int* const cPtr1 = &val;
	*cPtr1 = 90;
	cPtr1 = &val1; // error

	// There pointers that have const before and after asterisk which does allow change
	// anything.
	const int* const ccPtr = &val;
	ccPtr = &val1; // error
	*ccPtr = 9; // error
}