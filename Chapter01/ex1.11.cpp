#include <iostream>
int main()
{
   int a = 0, b = 0;

   std::cout << "Please enter two integers, a low and high bound: ";
   std::cin >> a >> b;
   while (a <= b)
   {
    std::cout << a << std::endl;
    ++a;
   }

}
