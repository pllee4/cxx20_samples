/* 
 * main.cpp
 * 
 * Created on: Jun 19, 2023 21:34
 * Description: 
 * 
 * Copyright (c) 2023 Pin Loon Lee (pllee4)
 */ 

#include <iostream>
#include <numbers> // since c++20

class Shape {
 public:
  virtual constexpr double GetArea() const = 0;
};

class Circle : public Shape {
 public:
  constexpr Circle(double radius) : radius_(radius) {}
  constexpr double GetArea() const override {
    return std::numbers::pi * radius_ * radius_;
  }

 private:
  double radius_;
};

class Square : public Shape {
 public:
  constexpr Square(double side) : side_(side) {}
  constexpr double GetArea() const override { return side_ * side_; }

 private:
  double side_;
};

constexpr double ComputeArea(const Shape& shape) { return shape.GetArea(); }

int main() {
  constexpr Circle circle(2.0);
  constexpr Square square(3.0);
  std::cout << "Area of circle: " << ComputeArea(circle) << std::endl;
  std::cout << "Area of Square: " << ComputeArea(square) << std::endl;

  return 0;
}