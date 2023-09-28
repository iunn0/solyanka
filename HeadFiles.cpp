#include <iostream>
//#define _DEBUG_
#include "BubbleSort.h"
#include "HEADER.h"
#include "Triangle.h"
#include "String.h"
#include "Students.h"
#include <string>

int factorial(int);
int binarySch(int* arr, int size, int numberTOFind);

int main()
{
	Show();

    const int SIZE = 5;
    int arr[SIZE] = { 1,7 , 78, 21 ,5 };

    showSort(arr, SIZE);

    bubbleSort(arr, SIZE);
    showSort(arr, SIZE);

    std::cout << binarySch(arr, SIZE, 78);

    /*std::cout << factorial(-1) << std::endl; */

    /*Triangle* ptr = new Triangle{ 1, 5};

	ptr->drawByHeight();
    ptr->drawByWidth();

	std::cout << "Area is " << ptr->Area() << std::endl;

    delete ptr;*/

   /* String* str = new String{};

    std::cout << str->getString() << std::endl;
    std::cout << str->getSize() << std::endl;
  
    str->setString("Hello World");

    std::cout << str->getString() << std::endl;
    std::cout << str->getSize() << std::endl;

    str->setString("Hell");

    std::cout << str->getString() << std::endl;
    std::cout << str->getSize() << std::endl;*/

   // Students Chem("ssssss", 22);
   // Chem.showInfo();

    //delete str;
   

	return 0;
}
