#include <iostream>
#include "Sales_item.h"

int main()
{
   Sales_item temp_item, total_item;
   while(std::cin >> temp_item)

   {
    total_item += temp_item;
    std::cout << total_item << std::endl;
   }
   return 0;
}

