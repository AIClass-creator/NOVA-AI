/***********************************************
* Heap allocated variables and arrays
************************************************/

#include <iostream>

int main()
{
	//Heap variables
	// -------------
	// We create variable on heap by using new operator and assign the value to the
	// pointer of that data type.
	int* heapVar = new int(90);
	*heapVar = 0;
	std::cout << *heapVar << std::endl;
	
	// Remember to reclaim the space allocated by heap variable to avoid memory 
	// leaks using delete operator
	delete heapVar;
	heapVar = nullptr; // Remember that deleted pointers are invalid don't dereference it

	// Heap arrays
	//-----------
	// You can create an array on heap using new operator that returns the first
	// address of that array
	int* heapArray = new int[10] {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	heapArray[0] = 90;
	std::cout << heapArray[4] << std::endl;

	// Remember to reclaim space that was allocated by heap array using delete[]
	delete[] heapArray;
}