#include <iostream>
#include <list>

using namespace std;

int main() {
    list<int> lista = {10, 20, 30, 40, 50};
    
    auto it = lista.begin();

    cout << *it << endl;
    ++it;

    cout << *it << endl;
    ++it;

    lista.erase(it);
    cout << "" << endl;

    for (auto n: lista) {
        cout << n << " ";
    }
    cout << endl;

    return 0;
}