#include <iostream>

using namespace std;

struct node {
    int value;
    node *link;
};

int main() {
    int n;
    node *first = nullptr;

    cout << "Digite valores (0 para sair): \n";
    while (true) {
        cin >> n;
        if (n == 0) break;
        node *p = new node;
        p->value = n;
        p->link = first;
        first = p;
    }

    // TODO: exibir os valores contidos na lista
    cout << "\nConteúdo da lista:\n";
    node *p = first;
    while (p != nullptr) {
        cout << p->value << " ";
        p = p->link;
    }
    cout << endl;

    // TODO: liberar todos os nodos da lista
    p = first;
    while (p != nullptr) {
        p = p->link;
        delete first;
        first = p;
    }

    return 0;
}