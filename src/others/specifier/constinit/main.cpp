/*
 * main.cpp
 *
 * Created on: Dec 05, 2024 07:19
 * Description:
 *
 * Copyright (c) 2024 Pin Loon Lee (pllee4)
 */

#include <iostream>
#include <mutex>
#include <thread>

constexpr auto square(auto i) { return i * i; }

auto twice(auto i) { return i + i; }

consteval auto square2(auto i) { return i * i; }

constinit auto sq = square(2);    // OK: init is done at compile time
constinit auto sq2 = square2(2);  // OK: init is done at compile time
// constinit auto x_x = twice(2); // Error: compile time initializer required

thread_local constinit int counter;
std::mutex constinit cout_mutex;

void f(int thread_id) {
  for (auto i = 0; i < 5; ++i) {
    counter++;
    std::lock_guard<std::mutex> lock(cout_mutex);
    std::cout << "Thread " << thread_id << ": Counter = " << counter
              << std::endl;
  }
}

int main(int argc, char **argv) {
  std::thread thread1(f, 1);
  std::jthread thread2(f, 2);  // jtread would call join() automatically

  thread1.join();
}