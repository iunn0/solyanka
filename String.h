#pragma once
class String
{
private:
	char* str;

	void Copy(const char* otherStr);

public:
	String();
	String(const char* originStr);

	~String();

	const char* getString() const;
	size_t getSize() const;
	void setString(const char* newStr);

};

