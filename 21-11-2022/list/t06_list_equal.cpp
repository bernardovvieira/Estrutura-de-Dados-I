/*
 Implementar na biblioteca "list.cpp" a seguinte função:

    bool list_equal(const list &la, const list &lb){

    }

 Esta função deve verificar se duas listas encadeadas passadas por parâmetro (la e lb) são iguais.
 Duas  listas  são  consideradas  iguais  se  têm  o mesmo tamanho e
 exatamente a  mesma  sequência  de  valores, ou se ambas estão vazias.

 A função deve retornar true, caso as listas sejam iguais, ou false em caso contrário.

 Usar o programa abaixo para validar a implementação
*/

#include <cassert>
#include <iostream>

#include "list.cpp"

using namespace std;

int main() {
    UPF::list la, lb;

    assert(list_equal(la, lb));  // la: [] lb: []

    list_push_back(la, "a");
    assert(!list_equal(la, lb));  // la: ["a"] lb: []

    list_push_back(lb, "a");
    assert(list_equal(la, lb));  // la: ["a"] lb: ["a"]

    list_push_back(lb, "b");
    assert(!list_equal(la, lb));  // la: ["a"] lb: ["a", "b"]

    list_push_back(la, "b");
    assert(list_equal(la, lb));  // la: ["a", "b"] lb: ["a", "b"]

    list_push_front(la, "x");
    assert(!list_equal(la, lb));  // la: ["x", "a", "b"] lb: ["a", "b"]

    list_push_front(lb, "y");
    assert(!list_equal(la, lb));  // la: ["x", "a", "b"] lb: ["y", "a", "b"]

    la.first->value = "y";       // Muda 1o valor para "y"
    assert(list_equal(la, lb));  // la: ["y", "a", "b"] lb: ["y", "a", "b"]

    cout << "\nPassed!\n";
    return 0;
}
