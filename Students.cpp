#include "Students.h"
#include "iostream"

void Students::setGrades()
{
	int grade = -1;
	int count = 0;

	while (grade != 0)
	{
		std::cout << "Input " << count + 1 << " grade" << std::endl;
		std::cin >> grade;
		avgGrade += grade;
		if (grade != 0)
		count++;
	}
	if (count != 0)
	avgGrade /= count;

}

Students::Students(const char* nam, int ag)
{ 
	if (nam != nullptr)
	{ 
		int size = 0;
		while (nam[size] != '\0')
		{
			size++;
		}
		size++;

		//for (size_t i = 0; i < size; i++)
		//	name[i] = nam[i];
	}

	if (ag > 15)
		age = ag;

	setGrades();
}

Students::~Students()
{
	std::cout << "Student is dead" << std::endl;
}

void Students::showInfo()
{
	std::cout << "Student " << name << ". " << age << " years old. "
		<< "Average grade is " << avgGrade << "." << std::endl;
}
