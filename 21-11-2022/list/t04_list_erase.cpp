/*
 Implementar na biblioteca "list.cpp" a seguinte função:

    void list_erase(list &l, UPF::node* p){

    }

 Ela recebe uma lista duplamente encadeada l e um ponteiro para um nodo p.
 Remover o nodo apontado da lista, liberando a memória ocupada.

 Usar o programa abaixo para validar a implementação
*/

#include <cassert>
#include <iostream>

#include "list.cpp"

using namespace std;

int main() {
  UPF::list l;

  // Preparando a lista para os testes
  list_push_back(l, "aa");
  list_push_back(l, "bb");
  list_push_back(l, "cc");
  list_push_back(l, "dd");
  list_push_back(l, "ee");

  list_erase(l, l.first);  // Apaga o primeiro nodo da lista
  assert(list_size(l) == 4);
  assert(l.first != nullptr);
  assert(l.first->value == "bb");
  assert(l.first->next != nullptr);
  assert(l.first->previous == nullptr);

  list_erase(l, l.last);  // Apaga o primeiro nodo da lista
  assert(list_size(l) == 3);
  assert(l.last != nullptr);
  assert(l.last->value == "dd");
  assert(l.last->previous != nullptr);
  assert(l.last->next == nullptr);

  auto p = list_find(l, "cc");
  list_erase(l, p);
  assert(list_size(l) == 2);
  assert(l.first != nullptr);
  assert(l.first->value == "bb");
  assert(l.first->next != nullptr);
  assert(l.first->next->value == "dd");
  assert(l.first->next->previous == l.first);
  assert(l.last != nullptr);
  assert(l.last->value == "dd");
  assert(l.last->previous != nullptr);
  assert(l.last->previous->value == "bb");
  assert(l.last->previous->next == l.last);

  cout << "\nPassed!\n";
  return 0;
}
