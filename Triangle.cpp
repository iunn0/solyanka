#include <iostream>
#include "Triangle.h"

Triangle::Triangle(int h, int w)
	: height(h), width(w)
{
	std::cout << "Triangle created" << std::endl;
	std::cout << std::endl;
}

Triangle::~Triangle()
{
	std::cout << "Triangle destroyed" << std::endl;
	std::cout << std::endl;
}

void Triangle::drawHeight()
{
	for (size_t i = 0; i < height; i++){
		for (size_t j = 0; j <= i; j++){
			std::cout << "#";
        }
        std::cout << std::endl;
	}
	std::cout << std::endl;
}

void Triangle::drawWidth()
{
	for (size_t i = width; i > 0; i--){
		for (size_t j = 0; j < i; j++) {
			std::cout << "#";
		}
		std::cout << std::endl;
	}
	std::cout << std::endl;
}

float Triangle::Area()
{
	float area;
	area = height * width / 2;

	return area;
}
