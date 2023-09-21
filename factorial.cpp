#include <iostream>
int factorial(int n) 
{
    if (n <= 0)
    {
        std::cout << "num cannot be ";
        return n;
    }

    if (n < 1)
        return 1;
    
    return n * factorial(n - 1);
}