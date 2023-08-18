/*******************************
* Function overloading
********************************/
#include <iostream>

const float PI = 3.141f;

float Area(float radius)
{
	float area = PI * radius * radius;
	return area;
}

float Area(float Lenght, float Width)
{
	float area = Lenght * Width;
	return area;
}

int main()
{
	std::cout << "The area of circle: " << Area(10.6f) << "cm\n";
	std::cout << "The area of rectangle: " << Area(3, 6) << "cm\n";
}