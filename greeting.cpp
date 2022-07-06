#include "greeting.hpp"

void say_hello() {
  std::cout << "Hello world" << std::endl;
}

void say_hello(std::ostream& cout) {
  cout << "Hello world" << std::endl;
}