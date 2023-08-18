/***********************************
* Functions
************************************/

// Syntax for creating a function
/*********************************
* return-type identifier(Parameters) {...}
*********************************/

#include <iostream>
#include <string>

// Function that return void
void println(const std::string& message)
{
	std::cout << message << std::endl;
}

// Functions that return value
std::string ToString(int age, float height)
{
	std::string text =  std::string("This person age is ")
		+ std::to_string(age) 
		+ std::string(" and height is ") 
		+ std::to_string(height);
	return text;
}

int& PtrRef(int* value)
{
	return *value;
}

int main()
{
	std::string name = std::string("Thierry");
	// You have to pass all parameters that function require.
	println("Hello, world!"); // correct
	println(ToString(20, 1.7f));

	// Passing reference and pointers to function.
	int testVal = 90;
	int* ptrVal = &testVal;

	// The function takes and point to a variable and return reference to that
	// variable passed.
	int& testRef = PtrRef(ptrVal);
	testRef = 8;
	std::cout << testRef << std::endl;
	std::cout << *ptrVal << std::endl;
	std::cout << testVal << std::endl;
}