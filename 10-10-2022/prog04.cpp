#include <iostream>

using namespace std;

struct Data {
    int dia, mes, ano;
};

struct Pessoa {
    string nome;
    float peso;
    Data nascimento;
    Pessoa *mae;
};

int main() {
    Pessoa p1 = {"Fulana", 59.5, {12, 8, 1973}, nullptr};
    Pessoa p2 = {"Beltrano", 75.0, {5, 12, 1999}, &p1};
    Pessoa p3 = {"Cicrana", 66.0, {15, 2, 2002}, &p1};
    Pessoa p4 = {"Joana", 26.0, {30, 8, 2017}, &p3};

    cout << "Nome: " << p4.nome << endl;
    cout << "Peso: " << p4.peso << endl;
    cout << "Nascimento: " << p4.nascimento.dia << "/" << p4.nascimento.mes << "/" << p4.nascimento.ano << endl;
    cout << "Mãe: " << p4.mae->nome << endl;
    cout << "Mãe da mãe: " << p4.mae->mae->nascimento.ano << endl;

    return 0;
}