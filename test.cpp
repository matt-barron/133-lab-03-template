#include <iostream>
#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "funcs.h"
#include "doctest.h"

// Write test cases here

TEST_CASE("Sample tests"){
  std::string result;
  result=greet("Tom");
  
  CHECK(result.compare("Hello Tom!")==0);
  
}
TEST_CASE("Testing"){
}






