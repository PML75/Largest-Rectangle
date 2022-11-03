#include <iostream>
#include <iomanip>
#include "rectangle.h"

using namespace std;

int main() {
  std::cout << "====== Rectangle 1 ======" << std::endl;

  int r1Length;
  int r1Width;

  cout << "Please enter the length: ";
  cin >> r1Length;
  cout << "Please enter the width: ";
  cin >> r1Width;

  Rectangle r1;
  r1.SetLength(r1Length);
  r1.SetWidth(r1Width);

  cout << "Rectangle 1 created with length " << r1.GetLength() << " and width " << r1.GetWidth() << endl;
  cout << "The area of Rectangle 1 is: " << r1.Area() << endl;
  cout << "The perimeter of Rectangle 1 is: " << r1.Perimeter() << endl; 


  std::cout << "====== Rectangle 2 ======" << std::endl;

  int r2Length;
  int r2Width;

  cout << "Please enter the length: ";
  cin >> r2Length;
  cout << "Please enter the width: ";
  cin >> r2Width;

  Rectangle r2;
  r2.SetLength(r2Length);
  r2.SetWidth(r2Width);

  cout << "Rectangle 2 created with length " << r2.GetLength() << " and width " << r2.GetWidth() << endl;
  cout << "The area of Rectangle 2 is: " << r2.Area() << endl;
  cout << "The perimeter of Rectangle 2 is: " << r2.Perimeter() << endl;

  Rectangle r3;
  r3 = LargestRectangleByArea(r1, r2);
  cout << "The largest rectangle has a length of " << r3.GetLength()
 << ", a width of " << r3.GetWidth() << ", and an area of " << r3.Area() << "." << endl;

  return 0;
}
