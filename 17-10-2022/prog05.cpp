#include <iostream> 
#include <vector>

using namespace std;

int main() {
    vector<int> v;

    v.reserve(1000); // reserva espaço para 1000 elementos

    for (int i = 0; i < 1200; i++) {
        v.push_back(0); // adiciona um elemento no final do vetor
    }

    cout << v.size() << endl; // apresenta o tamanho do vetor
    cout << v.capacity() << endl; // apresenta a capacidade do vetor

    return 0;
}