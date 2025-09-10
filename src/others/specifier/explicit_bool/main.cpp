/*
 * main.cpp
 *
 * Created on: Sep 09, 2025 21:52
 * Description:
 *
 * Copyright (c) 2025 Pin Loon Lee (pllee4)
 */

#include <type_traits>

struct foo {
  // Specify non-integral types (strings, floats, etc.) require explicit
  // construction.
  template <typename T>
  explicit(!std::is_integral_v<T>) foo(T) {}
};

int main() {
  foo a = 123;  // OK
  // foo b = "123";  // ERROR Copy initialization can only use non-explicit constructors
  foo c{"123"};  // OK Direct initialization ({} or ()) can use both explicit and non-explicit constructors
}