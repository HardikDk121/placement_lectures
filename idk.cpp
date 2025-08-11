#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
  int n, x;
  cout << "Enter no of elemetn for an array";
  cin >> n;
  int *arr = new int[n];
  for (int i = 0; i < n; i++) {
    cout << "Enter a number :";
    cin >> arr[i];
  }
  cout << endl;
  int *ptr1, *ptr2;
  for (ptr1 = arr; ptr1 < n + arr; ptr1++) {
    int flag = 0;
    for (ptr2 = ptr1; ptr2 < arr + n; ptr2++) {
      if (*ptr1 < *ptr2) {
        flag = 1;
        int temp = *ptr1;
        *ptr1 = *ptr2;
        *ptr2 = temp;
      }
    }
    if (flag == 0)
      break;
  }
  for (int i = 0; i < n; i++)
    cout << arr[i] << "  ";
  return 0;
}
