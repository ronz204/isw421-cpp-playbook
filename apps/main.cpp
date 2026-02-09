#include <iostream>

int main() {
  int alpha = 5;
  int beta = 10;

  int result = alpha + beta;
  std::cout << "The result of adding alpha and beta is: " << result << std::endl;


  int day = 3;
  switch (day) {
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

  return 0;
}
