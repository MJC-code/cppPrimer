#include <iostream>
int main()
{
    int sum = 0;
    int value = 0;
    std::cout << "Please enter a series of integers to sum, then ctrl-D to finish\n";
    while (std::cin >> value)
    {
        sum += value;
    }
    std::cout << "The sum is " << sum << std::endl;
}

