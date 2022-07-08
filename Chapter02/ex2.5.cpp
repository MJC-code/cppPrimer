#include <iostream>
#include <typeinfo>
int main()
{
    std::cout << typeid(3.14L).name() << std::endl;
    return 0;
}