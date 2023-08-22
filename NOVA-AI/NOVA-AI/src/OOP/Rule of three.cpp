#include <iostream>


class String
{
public:
	// Default constructor
	String()
		:m_Buffer(new char[1] {'\0'}), m_Size(1)
	{}

	// Constructor that takes a text as parameter
	String(const char* text)
	{
		m_Size = std::strlen(text) + 1;
		m_Buffer = new char[m_Size];
		strcpy_s(m_Buffer, m_Size, text);
	}

	// Copy constructor
	String(const String& other)
	{
		m_Size = other.m_Size;
		m_Buffer = new char[m_Size];
		strcpy_s(m_Buffer, m_Size, other.m_Buffer);
	}

	// Move constructor
	String(String&& other) noexcept
	{
		m_Size = other.m_Size;
		m_Buffer = other.m_Buffer;
		other.m_Buffer = nullptr;
	}

	// Copy assignment operator
	String& operator=(const String& other)
	{
		if (this != &other)
		{
			delete[] m_Buffer;
			m_Buffer = nullptr;
			m_Size = other.m_Size;
			m_Buffer = new char[m_Size];
			strcpy_s(m_Buffer, m_Size, other.m_Buffer);
		}
		return *this;
	}

	// Move assignment operator
	String& operator=(String&& other) noexcept
	{
		if (this != &other)
		{
			m_Size = other.m_Size;
			m_Buffer = other.m_Buffer;
			other.m_Buffer = nullptr;
		}
		return *this;
	}

	std::string GetStr() { return std::string(m_Buffer); }

	// Destructor
	~String()
	{
		if (m_Buffer != nullptr)
			delete[] m_Buffer;
	}

private:
	char* m_Buffer;
	std::size_t m_Size;
};

int main()
{
	String name1;
	String name2 = "Joella";
	name1 = std::move(name2);
	std::cout << name1.GetStr() << std::endl;
}