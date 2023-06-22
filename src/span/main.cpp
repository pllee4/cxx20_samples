/* 
 * main.cpp
 * 
 * Created on: Jul 10, 2023 19:23
 * Description: 
 * 
 * Copyright (c) 2023 Pin Loon Lee (pllee4)
 */

#include <array>
#include <iostream>
#include <span>
#include <vector>

void print(std::span<int> container) {
  for (auto e : container) std::cout << e << ' ';
  std::cout << "\n";
}

int main() {
  int arr[]{1, 2, 3, 4};
  print(arr);

  std::vector vec{1, 2, 3, 4, 5};
  print(vec);

  std::array arr2{1, 2, 3, 4, 5, 6};
  print(arr2);
}