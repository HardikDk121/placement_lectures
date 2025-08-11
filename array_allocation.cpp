#include <iostream>
using namespace std;
int main() {
  int n, m = 5;
  cout << "Enter the size of the array: ";
  cin >> n;
  int *arr = new int[n]; // Dynamic memory allocation for an array
  for (int i = 0; i < n; i++)
    arr[i] = i + 1; // Initializing the array with some values
  cout << "addres of n:" << &n << endl;
  cout << "addres of m:" << &m << endl;
  return 0; // Freeing memory is not shown here, but should be done in practice
}
