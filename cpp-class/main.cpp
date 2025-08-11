#include "cube.h"
#include <iostream>

int main() {
  Cube c1;
  c1.setLength(5.0);
  double volume = c1.getVolume();
  double surfaceArea = c1.getsurfaceArea();
  std::cout << "Volume: " << volume << std::endl;
  std::cout << "Surface Area: " << surfaceArea << std::endl;
  return 0;
}
