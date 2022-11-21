#include <iostream>
#include <queue>

using namespace std;

int main() {
    
    queue<int> fila; // cria uma fila vazia

    fila.push(10);
    fila.push(20);
    fila.push(30); // adiciona elementos na fila

    cout << "Tamanho da fila: " << fila.size() << endl; 

    cout << "Primeiro elemento da fila: " << fila.front() << endl;
    cout << "Último elemento da fila: " << fila.back() << endl;

    fila.pop(); // remove o primeiro elemento da fila

    cout << "Primeiro elemento da fila: " << fila.front() << endl;
    cout << "Último elemento da fila: " << fila.back() << endl;

    return 0;
}