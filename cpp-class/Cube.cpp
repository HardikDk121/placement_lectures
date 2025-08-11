#include "cube.h"

double Cube::getVolume() { return length * length * length; }

double Cube::getsurfaceArea() { return 6 * length * length; }

void Cube::setLength(double newLength) { length = newLength; }
