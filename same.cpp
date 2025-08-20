#include <iostream>
using namespace std;
int main() {
  int size;
  cout << "Enter size of array  : ";
  cin >> size;
  int *arr = new int[size];

  for (int index = 0; index < size; index++) {
    cout << "Enter a number for :" << "[" << index << "] :";
    cin >> *(arr + index);
  }
  int number, position;
  cout << endl;
  cout << "Enter a number and position : ";
  cin >> number >> position;
  size++;
  int *ptr;
  for (ptr = arr + size; arr + position < ptr; ptr--) {
    *(ptr) = *(ptr - 1);
  }
  *(arr + position) = number;
  for (ptr = arr; ptr < arr + size; ptr++)
    cout << "  " << *ptr;
  cout << endl;
  cout << "Enter to position dealete : ";
  cin >> position;
  for (ptr = arr + position; ptr < (arr + size - 1); ptr++) {
    *ptr = *(ptr + 1);
  }

  size--;
  for (ptr = arr; ptr < arr + size; ptr++)
    cout << "  " << *ptr;

  cout << endl;
  cout << "Enter number and  position update : ";
  cin >> number >> position;
  *(arr + position) = number;

  for (ptr = arr; ptr < arr + size; ptr++)
    cout << "  " << *ptr;
  return 0;
}
