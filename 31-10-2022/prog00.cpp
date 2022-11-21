#include <iostream>
#include <forward_list>

using namespace std;

int main() {
    forward_list<int> lista;

    lista.push_front(100);
    lista.push_front(200);
    lista.push_front(222);
    lista.push_front(200);

    cout << "Início: " << lista.front() << endl;

    // lista.pop_front(); // remove o primeiro elemento
    lista.remove(200); // remove o elemento 200 da lista

    for (auto v: lista) {
        cout << v << endl;
    }

    return 0;
}