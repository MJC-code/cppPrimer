#include <iostream>
std::string global_str;
int main()
{
    double wage = 999;
    double salary = wage;
    std::cout << global_str;
    int local_int;
    std::string local_str;
    std::cout << local_str;
    std::cout << local_int << std::endl;

    return 0;
}