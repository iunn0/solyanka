#include "String.h"

void String::Copy(const char* otherStr)
{
	size_t sizeStr = 0;
	while (otherStr[sizeStr] != '\0')
		sizeStr++;
	sizeStr++;

	str = new char[sizeStr];

	for (size_t i = 0; i < sizeStr; i++)
	{
		str[i] = otherStr[i];
	}

}

String::String()
	: str(nullptr)
{ }

String::String(const char* originStr)
	: str(nullptr)
{
	if (originStr != nullptr) 
		Copy(originStr);
}

String::~String()
{
	delete[] str;
	str = nullptr;
}

const char* String::getString() const
{
	return str != nullptr ? str : "";
}

size_t String::getSize() const
{
	size_t size = 0;
	if (str != nullptr) {
		while (str[size] != '\0')
			size++;
	}
	return size;
}

void String::setString(const char* newStr)
{
	if (newStr != nullptr) {
		delete[] str;
		Copy(newStr);
	}
}