#include <iostream>

#include "bases/conditions.h"
#include "bases/functions.h"
#include "bases/looping.h"
#include "bases/lambdas.h"

int main() {
  conditions::demo();
  std::cout << std::endl;

  functions::demo();
  std::cout << std::endl;

  looping::demo();
  std::cout << std::endl;

  lambdas::demo();
  std::cout << std::endl;

  return 0;
}
