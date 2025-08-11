#include <cstdint> // For uintptr_t
#include <iostream>
using namespace std;
int main() {
  char *p, arr[10];
  cout << "Enter a string: ";
  cin.getline(arr, 10); // Read a string from input
  for (p = arr; *p != '\0'; p++)
    ; // Assign the address of each character to p
  cout << "start address of the string: " << reinterpret_cast<uintptr_t>(arr)
       << endl; // Print the address of the first character
  cout << "Last address of the string: " << reinterpret_cast<uintptr_t>(p)
       << endl; // Print the address of the last character
}
