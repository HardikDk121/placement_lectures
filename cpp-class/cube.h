#pragma once

class Cube {
public:
  double getVolume();
  double getsurfaceArea();
  void setLength(double length);

private:
  double length; // Length of the cube's side
};
