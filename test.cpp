#include <stdlib.h>
#include <stdio.h>
#include <string>
#include <iostream>

int main() {
  std::string foo = "foo";
  if (foo == "bar") {
    fopen(foo.c_str(), "w");
  } else {
    fopen(foo.c_str(), "r");
  }
  return 0;
}
