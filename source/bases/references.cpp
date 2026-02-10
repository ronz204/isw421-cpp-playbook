#include "references.h"
#include <iostream>

namespace references
{
  void demo()
  {
    std::cout << "References demo" << std::endl;

    int number = 10;
    int& ref = number;

    ref = 20;
  }
}
