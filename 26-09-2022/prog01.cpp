#include <iostream>

using namespace std;

const int STACK_SIZE = 100;

struct Pilha {
    int dados[STACK_SIZE];
    int topo = -1;
};

bool vazia(const Pilha &p) {
    return p.topo == -1;
}

int tamanho(const Pilha &p) {
    return p.topo + 1;
}

void insere(Pilha &p, int valor) {
    if (p.topo == STACK_SIZE -1) {
        cout << "Stack overflow!\n" << endl;
    } else {
        p.dados[++p.topo] = valor;
    }
}

void retira(Pilha &p) {
    if (p.topo == -1) {
        cout << "Stack underflow!\n" << endl;
    } else {
        p.topo--;
    }
}

int consultaTopo(const Pilha &p) {
    if (vazia(p)) {
        cout << "Empty!\n" << endl;
        return 0;
    } else {
        return p.dados[p.topo];
    }
}

int main() {
    Pilha p1;

    insere(p1, 55);
    insere(p1, 99);
    insere(p1, 300);
    insere(p1, -1);
    insere(p1, 1234);

    while (!vazia(p1)) {
        cout << "Tamanho: " << tamanho(p1)
             << "Topo: " << consultaTopo(p1) 
             << endl;

        retira(p1);
    }

    return 0;
}