/*
 * main.cpp
 *
 * Created on: Dec 02, 2024 07:27
 * Description:
 *
 * Copyright (c) 2024 Pin Loon Lee (pllee4)
 */

#include <iostream>
#include <ranges>
#include <vector>

int main(int argc, char** argv) {
  std::vector data{1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
  auto result{data | std::views::filter([](const auto& value) {
                return value % 2 == 0;
              }) | /* 2 4 6 8 10 */
              std::views::transform([](const auto& value) {
                return value * 2;
              }) |                  /* 4 8 12 16 20 */
              std::views::drop(2) | /* 12 16 20 */
              std::views::reverse | /* 20 16 12 */
              std::views::transform([](const auto& value) {
                std::cout << "I am evaluated"
                          << std::endl;       // lazily evaluated, this won't be
                                              // called when no one use result
                return std::to_string(value); /* "20" "16" "12" */
              })};
  // const on result would cause error in the range-based loop below
  for (const auto& value : result) {
    std::cout << value << std::endl;
  }
}