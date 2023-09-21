#include <iostream>
//#define _DEBUG_
#include "BubbleSort.h"
#include "HEADER.h"
#include "Triangle.h"

int factorial(int);

int main()
{
  //  Show();

    //const int SIZE = 5;
    //int arr[SIZE] = { 1,7 , 78, 21 ,5 };

    //showSort(arr, SIZE);

    //bubbleSort(arr, SIZE);

    //showSort(arr, SIZE);

  //  std::cout << factorial(5) << std::endl;

    Triangle triangle(5, 9);

    triangle.drawHeight();
    triangle.drawWidth();

    std::cout << "Area is " << triangle.Area() << std::endl;

    return 0;
}
