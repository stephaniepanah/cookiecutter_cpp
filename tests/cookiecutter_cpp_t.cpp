#include "catch2/catch.hpp"
#include "cookiecutter_cpp/cookiecutter_cpp.hpp"

using namespace cookiecutter_cpp;

TEST_CASE("add_one", "[adder]")
{
  REQUIRE(add_one(0) == 1);
  REQUIRE(add_one(123) == 124);
  REQUIRE(add_one(-1) == 0);
}
