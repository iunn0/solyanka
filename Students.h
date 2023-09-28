#pragma once
class Students
{
private:
	const char* name = "NoName";
	int age;
	int avgGrade = 0;

	void setGrades();

public:

	Students(const char* nam, int ag);

	~Students();

	void showInfo();

};

