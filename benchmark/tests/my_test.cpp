#include <nvm_malloc.h>
#include <iostream>


struct Node {
  int data;
  Node *next;
};

int main() {
  nvm_initialize("/home/yingjun/nvm_malloc/", 0);
  Node *new_node = (Node*) nvm_reserve(sizeof(Node));
  new_node->data = 99;
  std::cout<< "data = " << new_node->data << std::endl;
  nvm_persist(new_node, sizeof(Node));
}
