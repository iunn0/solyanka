#include <iostream>
//#define _DEBUG_
#include "BubbleSort.h"
#include "HEADER.h"
#include "Triangle.h"

int factorial(int);

int main()
{
	/*Show();

    const int SIZE = 5;
    int arr[SIZE] = { 1,7 , 78, 21 ,5 };

    showSort(arr, SIZE);

    bubbleSort(arr, SIZE);
    showSort(arr, SIZE);

    std::cout << factorial(-1) << std::endl;*/

    Triangle* ptr = new Triangle{ -1, 5};

	ptr->drawByHeight();
    ptr->drawByWidth();

	std::cout << "Area is " << ptr->Area() << std::endl;

    delete ptr;

	return 0;
}
