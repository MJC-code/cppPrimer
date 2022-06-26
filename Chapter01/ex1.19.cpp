#include <iostream>
int main()
{
    int a = 0, b = 0;

    std::cout << "Please enter two integers, and I will print a range from low to high: \n";
    std::cin >> a >> b;

    if (a < b)
    {
        for (int i = a; i <= b; ++i)
        {
            std::cout << i << std::endl;
        }
    }

    else
    {
        for (int i = b; i <= a; ++i)
        {
            std::cout << i << std::endl;
        }
    }
    return 0;
}
