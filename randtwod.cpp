
#include <iostream>

using namespace std;

int main() {
  int rows, cols;
  cout << "enter number of rows : ";
  cin >> rows;
  int *colsarray = new int[rows];

  int **array = new int *[rows];
  for (int index = 0; index < rows; index++) {
    cout << "enter number of column : ";
    cin >> cols;
    colsarray[index] = cols;
    *(array + index) = new int[cols];
  }
  for (int index = 0; index < rows; index++) {
    for (int jindex = 0; jindex < colsarray[index]; jindex++) {
      cout << "Enter number : ";
      cin >> array[index][jindex];
    }
  }
  for (int index = 0; index < rows; index++) {
    for (int jindex = 0; jindex < colsarray[index]; jindex++) {
      cout << "array" << "[" << index << "]" << "[" << jindex << "]"
           << " is : " << array[index][jindex] << endl;
    }
  }
}
