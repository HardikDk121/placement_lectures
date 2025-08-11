#include <iostream>

using namespace std;
int main() {
  int *p1, *p2, temp;
  int a = 10, b = 20;
  p1 = &a;    // p1 points to a
  p2 = &b;    // p2 points to b
  temp = *p1; // Swapping pointers
  *p1 = *p2;  // p1 and p2 now point to each other's values
  *p2 = temp;
  //
  cout << "After swapping:" << endl;
  cout << "Value of a: " << *p1 << endl; // Should print 20
  cout << "Value of b: " << *p2 << endl; // Should print 10
                                         //
  char arr1[10], arr2[10];
  char *ptr = arr1;
  cout << "Enter a string: ";
  cin.getline(ptr, 10); // Read a string from input
  cout << ptr << "\n";  //
  int i = 0;
  while (ptr[i] != '\0' && i < 10) {
    arr2[i] = ptr[i]; // Copying characters from arr1 to chart2
    i++;
  }
  arr2[i] = '\0';                            // Null-terminate the copied string
  cout << "Copied string: " << arr2 << endl; // Print the copied string
  return 0;
}
