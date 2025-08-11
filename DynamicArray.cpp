#include <iostream>

int main() {
  char arr[100];
  int i = 0;
  printf("Enter a String :  ");
  while ((arr[i] = getchar()) != '\n')
    i++;
  arr[i] = '\0';
  i = 0;
  while (arr[i] != '\0')
    putchar(arr[i++]);
  putchar('\n');
  return 0;
}
