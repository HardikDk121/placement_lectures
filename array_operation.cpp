#include <iostream>

using namespace std;

int main() {
  int numbers;
  cout << "Enter number of numbers :  ";
  cin >> numbers;
  int *array = new int[numbers];

  for (int index = 0; index < numbers; index++)
    cin >> array[index];

  int min, max;
  min = max = array[0];

  for (int index = 1; index < numbers; index++) {
    if (min > array[index])
      min = array[index];
    if (max < array[index])
      max = array[index];
  }
  cout << "smallest number and largest number in array are   " << min
       << " and  " << max << endl;
  for (int index = numbers; index > numbers / 2; index--) {
    int jindex = numbers - index - 1;
    int temp = array[index];
    array[index] = array[jindex];
    array[jindex] = temp;
  }
  cout << "reversed array " << endl;
  for (int index = 0; index < numbers; index++)
    cout << array[index] << " ";
  cout << endl;

  int rotation;
  cout << "Enter number of rotation : ";
  cin >> rotation;

  rotation = rotation % numbers;
  int *temp = new int[numbers];

  int index;
  for (index = 0; index < rotation; index++) {
    temp[index] = array[rotation + index];
  }
  for (index = rotation; index < numbers; index++) {
    temp[index] = array[index - rotation];
  }
  cout << rotation << "  rotation array " << endl;
  for (int index = 0; index < numbers; index++)
    cout << temp[index] << "  ";
  cout << endl;
  return 0;
}
