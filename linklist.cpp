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
  void printList() {

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
  void reverse() {
    class Node *prev, *current, *next_node;

    prev = current = head;

    if (current->next == NULL) {
      return;
    }
    while (current) {
      next_node = current->next;
      current->next = prev;
      prev = current;
      current = next_node;
    }
    head->next = NULL;
    head = prev;
  }
  void break_link_list() {
    class Node *odd_ptr, *even_ptr, *current = head, *l1, *l2;
    while (current != NULL) {
      if ((current->value) % 2 == 0) {
        if (l1 == NULL)
          l1 = even_ptr = current;
        else {
          even_ptr->next = current;
          even_ptr = current;
        }

      } else {
        if (l2 == NULL)
          l2 = odd_ptr = current;
        else {
          odd_ptr->next = current;
          odd_ptr = current;
        }
      }
      current = current->next;
    }
    odd_ptr->next = NULL;
    even_ptr->next = NULL;
    cout << endl << "odd link list" << endl;
    while (l1 != NULL) {
      cout << "   " << l1->value;
      l1 = l1->next;
    }

    cout << endl << "even link list" << endl;
    while (l2 != NULL) {
      cout << "   " << l2->value;
      l2 = l2->next;
    }
    cout << endl;
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
  l1.printList();
  l1.reverse();
  l1.printList();
  l1.break_link_list();
  return 0;
}
