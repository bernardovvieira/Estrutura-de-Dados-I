#include <iostream>
#include <stack>

using namespace std;

int main() {
    stack<string> p;

    p.push("AAA");
    p.push("BBB");
    p.push("CCC");
    p.push("DDD");
    p.push("EEE"); // Insere no topo da pilha

    while (!p.empty()) { // Testa se a pilha está vazia
        cout << "Tamanho: " << p.size() // Retorna o tamanho da pilha
             << " Topo: " << p.top() // Retorna o elemento do topo da pilha
             << endl;

        p.pop(); // Retira o elemento do topo da pilha
    }

    return 0;
}