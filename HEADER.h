#pragma once
#include <iostream>

#ifdef _DEBUG_
void Show()
{
    std::cout << "First f";
}

#else
void Show()
{
    std::cout << "Second f";
}

#endif