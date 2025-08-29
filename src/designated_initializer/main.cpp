/*
 * main.cpp
 *
 * Created on: Aug 29, 2025 19:21
 * Description:
 *
 * Copyright (c) 2025 Pin Loon Lee (pllee4)
 */

struct A {
  int x;
  int y;
};

struct B {
  struct A a;
};

int main() {
  struct A a = {.x = 1, .y = 2};
  // struct A a = {.y = 1, .x = 2};  // valid C, invalid C++ (designator order does not match)
  // struct B b = {.a.x = 0};  // valid C, invalid C++ (nested)
}