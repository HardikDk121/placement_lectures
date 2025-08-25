#include <iostream>

using namespace std;
struct student {

  char name[25];
  int roll_no, marks;
};
int main() {
  int n;
  cout << "Enter number of students : ";
  cin >> n;
  struct student stud[n];
  for (int index = 0; index < n; index++) {
    cout << "enter name of student : ";
    cin >> stud[index].name;
    cout << "enter number of student : ";
    cin >> stud[index].roll_no;
    cout << "enter marks of student : ";
    cin >> stud[index].marks;
  }
}
