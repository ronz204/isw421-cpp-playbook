#include "references.h"
#include <iostream>
#include <vector>

namespace references
{
  void swap(int& a, int& b)
  {
    int temp = a; a = b; b = temp;
  }

  void display(const User& user)
  {
    std::cout << "Name: " << user.name << ", Email: " << user.email << std::endl;
  }

  void demo()
  {
    std::cout << "References demo" << std::endl;

    int alpha = 5, beta = 15;
    std::cout << "Before swap: alpha = " << alpha << ", beta = " << beta << std::endl;

    swap(alpha, beta);
    std::cout << "After swap: alpha = " << alpha << ", beta = " << beta << std::endl;


    User user{"Alice", "tester@example.com"};
    display(user);


    std::vector<std::string> names = {"Alice", "Bob", "Charlie"};
    for (const auto& name : names)
    {
      std::cout << name << std::endl;
    }
  }
}
