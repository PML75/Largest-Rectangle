#include "rectangle.h"

int Rectangle::Area() 
{
  int l = GetLength();
  int w = GetWidth();
  int result = l*w;
  return result;
}

int Rectangle::Perimeter() 
{
  int l = GetLength();
  int w = GetWidth();
  int result = 2*(l+w);
  return result;
}

Rectangle LargestRectangleByArea(Rectangle &r1, Rectangle &r2) 
{
  if(r1.Area()>r2.Area()){
  return r1;
  }else{
    return r2;
  }
}
