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
		m_Size = strlen(text) + 1;
		m_Buf = new char[m_Size];
		strcpy_s(m_Buf, m_Size, text);
	}

	void Print()
	{
		for (int i = 0; i < m_Size; i++)
			std::cout << m_Buf[i];
	}

	~String()
	{
		delete[] m_Buf;
	}
};


int main()
{
	String string("Miopy");
	string.Print();
}