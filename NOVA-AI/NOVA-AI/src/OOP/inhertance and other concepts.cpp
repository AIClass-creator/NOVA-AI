#include <iostream>

struct Person
{
	std::string SkinColor;
	float Height;
	float Wieght;
};

struct Boy : public Person
{
	std::string BeardColor;
};

struct Girl : public Person
{
	float VoiceFrequency;
};

int main()
{
}