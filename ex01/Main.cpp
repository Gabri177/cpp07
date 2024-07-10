#include <iostream>
#include "Iter.hpp"


void addOne (int & num){
    num += 1;
}

int main()
{
	int a[] = {1, 1, 1};

    for (int i = 0; i < 3; i ++)
        std::cout << a[i] << " ";
    std::cout << std::endl;
	::iter(a, sizeof(a) / sizeof(int), addOne);
    for (int i = 0; i < 3; i ++)
        std::cout << a[i] << " ";
    std::cout << std::endl;
    ::iter(a, sizeof(a) / sizeof(int), addOne);
    for (int i = 0; i < 3; i ++)
        std::cout << a[i] << " ";
    std::cout << std::endl;
	
    return 0;
}