#include <iostream>
using namespace std;
int main() {
  int i, x, n = 10;
  int arr[4] = {10, 5, 69, 7};
  int *p;
  p = arr;
  x = sizeof(arr) / sizeof(n);
  cout << "size of array " << x;
}
