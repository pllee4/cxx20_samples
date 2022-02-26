/* 
 * shape.cxx
 * Created on: Nov 13, 2021 17:11
 * Description: 
 * 
 * Copyright (c) 2021 Pin Loon Lee (pllee4)
 */ 

export module shape;

export class Shape {
 public:
   Shape(int width, int height) : width_(width), height_(height) {}
   int GetArea() { return (width_ * height_); }

 private:
   int width_;
   int height_;
};