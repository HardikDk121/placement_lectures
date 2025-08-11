#include <iostream>
using namespace std;

int search(int number, int *array, int *n) {

  for (int index = 0; index < *(n); index++) {
    if (number == array[index])
      return index;
  }
  return -1;
}
void insert(int *array, int *n) {
  int position, number;
  cout << "Enter position a between 1 and " << *n << "to enter a number :";
  cin >> position;
  cout << "Enter a number : ";
  cin >> number;
  if (position < 1 || position > (*n) + 1) {
    cout << "position out of range";
    return;
  }
  int index;
  for (index = (*n) - 1; index >= position - 1 && index > -1; index--)
    array[index + 1] = array[index];
  array[position - 1] = number;
  (*n)++;
}
void del(int *array, int *n) {
  int position;

  cout << "Enter position a between 1 and " << *n << "to deleat a number :";
  cin >> position;

  if (position < 1 || position > (*n) + 1) {
    cout << "position out of range";
    return;
  }
  int index;
  for (index = position - 1; index <= (*n); index++)
    array[index] = array[index + 1];
  (*n)--;
}
void update(int *array, int *n) {
  int number;
  cout << "Enter a number to update ";
  cin >> number;
  int found = search(number, array, n);
  if (found == -1) {
    cout << "element does not exsit";
    return;
  }
  cout << "Enter updated value";
  cin >> array[found];
}
void print(int *array, int *n) {

  for (int index = 0; index < *n; index++)
    cout << array[index];
}
int main() {
  int array[20];
  int n;
  cout << "enter number of elements in array : ";
  cin >> n;

  for (int index = 0; index < n; index++)
    cin >> array[index];

  insert(array, &n);

  print(array, &n);

  del(array, &n);

  print(array, &n);

  int find;

  cout << "Enter a number to serch";
  cin >> find;
  cout << endl
       << "value" << find << "is at " << search(find, array, &n)
       << " position ";
  update(array, &n);

  return 0;
}
