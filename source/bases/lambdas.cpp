#include "lambdas.h"
#include <vector>
#include <iostream>
#include <algorithm>

namespace lambdas
{
  void demo()
  {
    std::cout << "Demonstrating lambdas:" << std::endl;

    std::vector<int> numbers = {1, 2, 3, 4, 5};
    int factor = 10;

    auto multiply = [factor](int num)
    {
      std::cout << num * factor << " ";
    };

    std::for_each(numbers.begin(), numbers.end(), multiply);
  }
}
