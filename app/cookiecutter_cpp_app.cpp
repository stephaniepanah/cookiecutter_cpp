#include "cookiecutter_cpp/cookiecutter_cpp.hpp"
#include <iostream>

int
main()
{
  int result = cookiecutter_cpp::add_one(1);
  std::cout << "1 + 1 = " << result << std::endl;
}
