#include "conditions.h"
#include <iostream>

namespace conditions
{
  void demo()
  {
    std::cout << "Demonstrating conditions:" << std::endl;

    int day = 3;

    switch (day)
    {
    case 1:
      std::cout << "Monday" << std::endl;
      break;
    case 2:
      std::cout << "Tuesday" << std::endl;
      break;
    case 3:
      std::cout << "Wednesday" << std::endl;
      break;
    default:
      std::cout << "Invalid day" << std::endl;
      break;
    }
  }
}
