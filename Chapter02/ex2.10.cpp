#include <iostream>
std::string global_str;
int global_int;
int main()
{
   int local_int;
   std::string local_str;

    std::cout << "Global string: " << global_str << std::endl
   << "Global int: " << global_int << std::endl
    << "Local int: " << local_int << std::endl
     << "Local string: " << local_str << std::endl;
} 