#include <vector>
#include <iostream>
#include <algorithm>

// Function prototype
int sum(int alpha, int beta);

int main() {
  int alpha = 5;
  int beta = 10;

  int result = sum(alpha, beta);
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

  int index = 5;
  do {
    std::cout << "Index: " << index << std::endl;
    index++;
  } while (index < 10);


  std::vector<int> numbers = {1, 2, 3, 4, 5};
  int factor = 10;

  auto multiply = [factor](int num) {
    std::cout << num * factor << " ";
  };

  std::for_each(numbers.begin(), numbers.end(), multiply);

  return 0;
}

// Function definition
int sum(int alpha, int beta) {
  return alpha + beta;
}
