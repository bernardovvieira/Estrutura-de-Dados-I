#include <iostream>

using namespace std;

struct Data {
    int dia, mes, ano;
};

struct Pessoa;

struct Cidade {
    string nome;
    string uf;
    int populacao;
    Pessoa *prefeito;
};

struct Pessoa {
    string nome;
    float peso;
    Data nascimento;
    Pessoa *mae;
    Cidade *naturalidade;
};

int main() {
    Cidade c1 = {"Passo Fundo", "RS", 200000, nullptr};
    Pessoa p1 = {"Fulano", 66.6, {12, 8, 1973}, nullptr, &c1};

    c1.prefeito = &p1;

    cout << p1.naturalidade->uf << endl;  
    cout << c1.prefeito->nome << endl;  

    return 0;
}