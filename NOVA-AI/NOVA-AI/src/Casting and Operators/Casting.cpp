#include <iostream>

int main()
{
	// Casting using static_cast<>();
	int iTest = 60;
	char cTest = static_cast<int>(iTest);

	// Casting using const_cast<>();
	const int* cPtr = nullptr;
	int* ptr = const_cast<int*>(cPtr);

	// Casting using reinterprete_cast<>()
	double* dPtr = nullptr;
	int* iPtr = reinterpret_cast<int*>(dPtr);
}