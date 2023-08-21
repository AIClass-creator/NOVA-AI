#include <iostream>

class String
{
private:
	char* m_Buf;
	unsigned long long m_Size;

public:
	String()
	{
		m_Buf = new char('\0');
		m_Size = 0;
	}

	String(const char* text)
	{
		m_Size = strlen(text) + 1ull;
		m_Buf = new char[m_Size];

		strcpy_s(m_Buf, m_Size, text);
	}

	void Print()
	{
		std::cout << m_Buf << std::endl;
	}
};

int main()
{
	int i = 0;
	std::cout << ++i << std::endl;
	std::cout << i++ << std::endl;
	std::cout << i << std::endl;
}