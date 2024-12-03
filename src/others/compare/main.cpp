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
}