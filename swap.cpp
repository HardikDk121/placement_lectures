#include <stdio.h>
void swap(int *a, int *b) {
  int temp = *a;
  *a = *b;
  *b = temp;
}
void swap_by_value(int a, int b) {
  int temp = a;
  a = b;
  b = temp;

  printf("two numbers after swap : %d %d ", a, b);
}
int main() {
  int num1, num2;
  printf("Enter two numbers to swap : ");
  scanf("%d %d", &num1, &num2);

  swap(&num1, &num2);
  swap_by_value(num1, num2);
  printf("two numbers after swap : %d %d ", num1, num2);
  return 0;
}
