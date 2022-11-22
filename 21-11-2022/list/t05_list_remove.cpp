/*
 Implementar na biblioteca "list.cpp" a seguinte função:

    void list_remove(list &l, const std::string &s){

    }

 Ela recebe uma lista duplamente encadeada l e uma string s.
 Remover todos os nodos da lista cujo valor é igual a s.

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
  list_push_back(l, "zz");
  list_push_back(l, "cc");
  list_push_back(l, "zz");
  list_push_back(l, "ee");

  list_remove(l, "aa");  
  assert(list_size(l) == 4);
  assert(l.first != nullptr);
  assert(l.first->value == "zz");
  assert(l.first->next != nullptr);
  assert(l.first->previous == nullptr);

  list_remove(l, "ee"); 
  assert(list_size(l) == 3);
  assert(l.last != nullptr);
  assert(l.last->value == "zz");
  assert(l.last->previous != nullptr);
  assert(l.last->next == nullptr);

  list_remove(l, "zz"); 
  assert(list_size(l) == 1);
  assert(l.first != nullptr);
  assert(l.first->value == "cc");
  assert(l.first->next == nullptr);
  assert(l.first->previous == nullptr);
  assert(l.last==l.first);

  cout << "\nPassed!\n";
  return 0;
}
