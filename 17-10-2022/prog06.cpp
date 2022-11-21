#include <iostream> 

using namespace std;

struct produto {
    int codigo;
    string nome;
    float preco; 
};

int main() {
    produto *p = new produto; // aloca memória para um produto

    p->codigo = 9999;
    p->nome = "Pilha AAA";
    p->preco = 14.50;

    cout << p->nome << endl;

    delete p; // libera a memória alocada

    return 0;
}