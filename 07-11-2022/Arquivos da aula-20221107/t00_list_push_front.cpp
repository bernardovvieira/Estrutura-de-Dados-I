/*
Implementar na biblioteca "list.cpp" as seguintes funções:

   int list_size(const list& l){

   }

   Retorna o tamanho (quantidade de elementos) da lista l

   ----

   void list_push_front(list &l, const std::string &s){

   }

   Ela recebe uma lista duplamente encadeada l e uma string s.
   Inserir no início da lista um novo nodo contendo o valor passado e atualizar o tamanho da lista.

Usar o programa abaixo para validar a implementação
*/
#include <cassert>
#include <iostream>

#include "../list.cpp"

using namespace std;
using namespace UPF;

int main() {
    UPF::list l;

    list_push_front(l, "aa");
    assert(list_size(l) == 1);
    assert(l.first != nullptr);
    assert(l.first == l.last);
    assert(l.first->previous == nullptr);
    assert(l.first->next == nullptr);
    assert(l.first->value == "aa");

    list_push_front(l, "bb");
    assert(list_size(l) == 2);
    assert(l.first != nullptr);
    assert(l.first != l.last);
    assert(l.first->value == "bb");
    assert(l.first->previous == nullptr);
    assert(l.first->next != nullptr);
    assert(l.first->next == l.last);
    assert(l.first->next->value == "aa");
    assert(l.last->next == nullptr);
    assert(l.last->previous == l.first);

    list_push_front(l, "cc");
    assert(list_size(l) == 3);
    assert(l.first != nullptr);
    assert(l.first != l.last);
    assert(l.first->value == "cc");
    assert(l.first->previous == nullptr);
    assert(l.first->next != nullptr);
    assert(l.first->next->value == "bb");
    assert(l.first->next->next != nullptr);
    assert(l.first->next->next->value == "aa");
    assert(l.last->next == nullptr);

    list_print(l);
    cout << "\nPassed!\n";
    return 0;
}
