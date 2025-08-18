#include <iostream>

using namespace std;

int main() {
  int rows, cols;
  cout << "enter number of rows : ";
  cin >> rows;
  cout << "enter number of columns : ";
  cin >> cols;
  int **array = new int *[rows];
  for (int index = 0; index < rows; index++) {
    *(array + index) = new int[cols];
  }
  for (int index = 0; index < rows; index++) {
    for (int jindex = 0; jindex < cols; jindex++) {
      cout << "Enter number : ";
      cin >> array[index][jindex];
    }
  }
  for (int index = 0; index < rows; index++) {
    for (int jindex = 0; jindex < cols; jindex++) {
      cout << "array" << "[" << index << "]" << "[" << jindex << "]"
           << " is : " << array[index][jindex] << endl;
    }
  }
}
