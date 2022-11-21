#include <iostream>
#include <list>

using namespace std;

int main() {
    list<int> lista = {200, 33, 4, 80, -3, 55};
    
    lista.sort([](int a, int b) {return a > b; }); // ordena a lista

    for (auto n: lista) {
        cout << n << " ";
    }   

    return 0;
}