#include "pointers.h"
#include <iostream>

namespace pointers
{
  void demo()
  {
    std::cout << "Pointers demo" << std::endl;

    int value = 42;
    int* ptr = &value;

    std::cout << "Value: " << value << ", Pointer: " << ptr << ", Dereferenced: " << *ptr << std::endl;

    *ptr = 100;
    std::cout << "After modification through pointer, Value: " << value << std::endl;
  }
}
