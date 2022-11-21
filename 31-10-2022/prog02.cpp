#include <iostream>
#include <list>

using namespace std;

int main() {
    list<string> lista;

    lista.push_front("aaa");
    lista.push_back("bbb");
    lista.push_front("ccc");
    lista.push_front("ddd");

    cout << "Início: " << lista.front() << endl;
    cout << "Final: " << lista.back() << endl;
    cout << "Tamanho: " << lista.size() << endl;

    cout << "Percorrendo com Range For:" << endl;
    for (auto s: lista) {
        cout << s << " ";
    }
    cout << endl;

    cout << "Percorrendo com Iteradores:" << endl;
    for (auto it = lista.begin(); it != lista.end(); it++) {
        cout << *it << " ";
    }
    cout << endl;

    cout << "Percorrendo Reverso com Iteradores:" << endl;
    for (auto it = lista.rbegin(); it != lista.rend(); it++) {
        cout << *it << " ";
    }
    cout << endl;

    lista.clear(); // remove todos os elementos da lista

    return 0;
}