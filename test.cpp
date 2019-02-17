#include <iostream>
#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "funcs.h"
#include "doctest.h"

TEST_CASE("Sample tests"){
  std::string result;
  result=greet("Tom");
  
  CHECK(result.compare("Hello Tom!")==0);
  
}

// Write test cases here





