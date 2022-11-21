/*
 Implementar na biblioteca "list.cpp" a seguinte função:

    void list_count(const list &l, const std::string &s){

    }

 Ela recebe uma lista duplamente encadeada l e uma string s.
 Contar e retornar a quantidade de nodos que contêm seu valor igual a s

 Usar o programa abaixo para validar a implementação
*/

#include <iostream>
#include <cassert>
#include "list.cpp"

using namespace std;

int main()
{
    UPF::list l;

    // Preparando a lista para os testes
    list_push_back(l, "aa");
    list_push_back(l, "bb");
    list_push_back(l, "cc");
    list_push_back(l, "aa");
    list_push_back(l, "cc");
    list_push_back(l, "aa");
    list_push_back(l, "dd");
    
    list_print(l);
    cout << endl;
    list_rprint(l);

    // Bateria de testes
    assert(list_count(l, "aa")==3);
    assert(list_count(l, "bb")==1);
    assert(list_count(l, "cc")==2);
    assert(list_count(l, "ee")==0);
    assert(list_count(l, "aaa")==0);

    cout << "\nFim (OK)!\n";
    return 0;
}
