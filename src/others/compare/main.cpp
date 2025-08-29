/*
 * main.cpp
 *
 * Created on: Jun 13, 2023 21:01
 * Description:
 *
 * Copyright (c) 2023 Pin Loon Lee (pllee4)
 */

#include <compare>
#include <iostream>

int main() {
  auto a = 20, b = 20;
  const auto compare = a <=> b;

  if (compare < 0) {
    std::cout << "a < b\n";
  } else if (compare == 0) {
    std::cout << "a == b\n";
  } else if (compare > 0) {
    std::cout << "a > b\n";
  }
  std::cout << "Equal " << std::is_eq(a <=> b) << std::endl;
  std::cout << "Not Equal " << std::is_neq(a <=> b) << std::endl;
  std::cout << "Less Than " << std::is_lt(a <=> b) << std::endl;
  std::cout << "Greater Than " << std::is_gt(a <=> b) << std::endl;
  std::cout << "Less Than or Equal " << std::is_lteq(a <=> b) << std::endl;
  std::cout << "Greater Than or Equal " << std::is_gteq(a <=> b) << std::endl;
}