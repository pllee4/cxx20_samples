/*
 * main.cpp
 *
 * Created on: Dec 01, 2024 22:16
 * Description:
 *
 * Copyright (c) 2024 Pin Loon Lee (pllee4)
 */

#include <iostream>

consteval int f() { return 42; }
consteval auto g() { return &f; }
consteval int h(int (*p)() = g()) { return p(); }
constexpr int r = h();
// constexpr auto e = g(); // this would throw error

constexpr int multiply(int a, int b) { return a * b; }
consteval int immediate_multiply(int a, int b) { return a * b; }

consteval int dbl_multiply(int a, int b) {
//   return 2 * multiply(a, b);  // OK
  return 2 * immediate_multiply(a, b); // error when the return type is not consteval
}

int main(int argc, char **argv) {
  std::cout << multiply(3, 2) << std::endl;
  std::cout << immediate_multiply(3, 2) << std::endl;

  constexpr auto a = 3;
  // auto a = 3; // this would throw error
  const auto b = 2;
  // auto b = 3; // this would throw error
  std::cout << immediate_multiply(a, b) << std::endl;
  std::cout << dbl_multiply(a, b) << std::endl;
}