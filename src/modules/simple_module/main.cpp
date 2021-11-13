/*
 * main.cpp
 * Created on: Nov 13, 2021 17:22
 * Description:
 *
 * Copyright (c) 2021 Pin Loon Lee (pllee4)
 */

#include <iostream>
#include <string>

import shape;

using namespace std;

int main() {
  Shape shape{10, 20};
  std::cout << shape.GetArea() << std::endl;
}
