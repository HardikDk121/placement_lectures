#include <cstddef>
#include <iostream>

using namespace std;

class Node {
public:
  int value;
  class Node *next;

  Node(int value) {
    this->value = value;
    this->next = NULL;
  }
};

class LinkList {
public:
  class Node *head;

  LinkList() { head = NULL; }
  void insert(int value) {
    class Node *newnode = new Node(value);
    if (head == NULL) {
      head = newnode;
      return;
    }
    class Node *ptr = head;
    while (ptr->next != NULL)
      ptr = ptr->next;
    ptr->next = newnode;
  }
  void delnode() {

    if (head == NULL) {
      cout << endl << " Empty Link List " << endl;
      return;
    }
    class Node *ptr = head, *preptr;

    while (ptr->next != NULL) {
      preptr = ptr;
      ptr = ptr->next;
    }
    cout << endl << " delated node : " << ptr->value << endl;
    delete (ptr);
    preptr->next = NULL;
  }
  void PrintList() {

    class Node *ptr = head;
    cout << endl << " Link List Elements are : " << endl;
    if (ptr == NULL) {
      cout << " Empty LinkList ";
      return;
    }
    while (ptr != NULL) {
      cout << "   " << ptr->value;
      ptr = ptr->next;
    }
  }
};
int main() {
  cout << " Link List Program ";
  class LinkList l1;
  l1.insert(5);
  l1.insert(10);
  l1.insert(15);
  l1.insert(20);
  l1.insert(25);
  l1.insert(30);
  l1.delnode();
  l1.PrintList();
  return 0;
}
