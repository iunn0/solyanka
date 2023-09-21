#include <iostream>
#include "Triangle.h"

Triangle::Triangle(int h, int w)
	: height(0), width(0)
{
	std::cout << "Triangle created" << std::endl;
	setValues(h, w);
	std::cout << std::endl;
}

Triangle::Triangle(int h)
	: Triangle(h, 0) { }

Triangle::~Triangle()
{
	std::cout << "Triangle destroyed" << std::endl;
	std::cout << std::endl;
}

void Triangle::setValues(int h, int w)
{
	if (h > 0 && w > 0) {
		height = h;
		width = w;
	}
	else { std::cout << "Values cannot be negative" << std::endl; }
}

void Triangle::drawByHeight()
{
	for (size_t i = 0; i < height; i++){
		for (size_t j = 0; j <= i; j++){
			std::cout << "#";
        }
        std::cout << std::endl;
	}
	std::cout << std::endl;
}

void Triangle::drawByWidth()
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
