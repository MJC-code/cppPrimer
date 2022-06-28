#include <iostream>
#include "Sales_item.h"

int main()
{
    Sales_item temp_item, prev_item;
    if (std::cin >> prev_item)
    {
        int counter = 1;
        while (std::cin >> temp_item)
        {
            if (temp_item.isbn() == prev_item.isbn())
            {
                ++counter;
                prev_item = temp_item;
            }
            else
            {
                counter = 1;
                prev_item = temp_item;
            }
            std::cout << "The same ISBN was entered " << counter << " times in a row" << std::endl;
        }
    }

    return 0;
}
