#include <iostream>
#include <queue>
#include <stack>

using namespace std;

int main() {
    queue<string> fila; // cria uma fila vazia
    stack<string> pilha; // cria uma pilha vazia

    pilha.push("C");

    fila.push("A");
    fila.push("B");

    pilha.push("D");

    fila.push(pilha.top()); // adiciona elementos na fila

    pilha.pop();

    fila.push(pilha.top()); // adiciona elementos na fila

    pilha.pop();

    cout << fila.front() << endl;

}