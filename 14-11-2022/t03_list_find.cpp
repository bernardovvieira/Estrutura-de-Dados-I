/*
 Implementar na biblioteca "list.cpp" a seguinte função:

    UPF::node* list_find(const list &l, const std::string &s){

    }

 Ela recebe uma lista duplamente encadeada l e uma string s.
 Retornar ponteiro para o primeiro nodo que contêm valor igual a s, ou nullptr caso não seja encontrado.

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
    list_push_back(l, "aa");
    list_push_back(l, "dd");

    list_print(l);

    // Bateria de testes
    assert(list_find(l, "aa") != nullptr);
    assert(list_find(l, "aa") == l.first);
    assert(list_find(l, "bb") != nullptr);
    assert(list_find(l, "bb") == l.first->next);
    assert(list_find(l, "cc") != nullptr);
    assert(list_find(l, "dd") != nullptr);
    assert(list_find(l, "dd") == l.last);
    assert(list_find(l, "ee") == nullptr);
    assert(list_find(l, "ddd") == nullptr);

    cout << "\nFim (OK)!\n";
    return 0;
}
