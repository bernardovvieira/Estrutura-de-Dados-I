/*
 Implementar na biblioteca "list.cpp" a seguinte função:

    void list_push_back(list &l, const std::string &s){

    }

 Ela recebe uma lista duplamente encadeada l e uma string s.
 Inserir no final da lista um novo nodo contendo o valor passado e atualizar o tamanho da lista.

 Usar o programa abaixo para validar a implementação
*/

#include <cassert>
#include <iostream>

#include "list.cpp"

using namespace std;

int main() {
    UPF::list l;

    list_push_back(l, "aa");
    assert(list_size(l) == 1);
    assert(l.first != nullptr);
    assert(l.first == l.last);
    assert(l.first->previous == nullptr);
    assert(l.first->next == nullptr);
    assert(l.first->value == "aa");

    list_push_back(l, "bb");
    assert(list_size(l) == 2);
    assert(l.last != nullptr);
    assert(l.first != l.last);
    assert(l.first->value == "aa");
    assert(l.last->value == "bb");
    assert(l.first->previous == nullptr);
    assert(l.first->next == l.last);
    assert(l.first->next->value == "bb");
    assert(l.last->next == nullptr);
    assert(l.last->previous == l.first);

    list_push_back(l, "cc");
    assert(list_size(l) == 3);
    assert(l.last != nullptr);
    assert(l.first != l.last);
    assert(l.first->value == "aa");
    assert(l.first->next != nullptr);
    assert(l.first->next->value == "bb");
    assert(l.first->next->next != nullptr);
    assert(l.first->next->next->value == "cc");
    assert(l.last->value == "cc");
    assert(l.last->next == nullptr);
    assert(l.last->previous != nullptr);
    assert(l.last->previous == l.first->next);

    cout << "\nPassed!\n";
    return 0;
}
