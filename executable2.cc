#include <iostream>

int useful_function();

int main(int argc, char **argv) {
  std::cout << "Hello World!" << std::endl;
  std::cout << "I got: " << useful_function() << " from my lib!" << std::endl;
  return 0;
}
