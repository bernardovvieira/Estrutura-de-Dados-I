#include <iostream>
#include <queue>

using namespace std;

struct pessoa {
    string nome;
    string fone;
};

int menu() {
    cout << "1) Adicionar" << endl;
    cout << "2) Chamar próxima" << endl;
    cout << "9) Sair" << endl;
    cout << "\n" << "Escolha uma opção: ";
    int op;
    cin >> op;
    cin.ignore();
    return op;
}

void adicionar(queue<pessoa> &fila) {
    pessoa aux;
    cout << "\n" << "\x1b[36;49mNome:\x1b[0m ";
    getline(cin, aux.nome);
    cout << "\x1b[36;49mTelefone:\x1b[0m ";
    getline(cin, aux.fone);
    cout << "\n";
    fila.push(aux);
}

void retirar(queue<pessoa> &fila) {
    if (fila.empty()) {
        cout << "\n\x1b[37;41;1m" << "Ninguém para chamar!" << "\x1b[0m\n" << endl;
    } else {
        pessoa proxima = fila.front();
        cout << "\n\x1b[32;49m" << "Nome: " << proxima.nome << endl;
        cout << "Telefone: " << proxima.fone << "\x1b[0m\n" << endl;
        fila.pop();
    }
}

int main() {
    queue<pessoa> fila; // cria uma fila vazia
    int opcao;

    do {
        opcao = menu();
        switch (opcao) {
            case 1: // inserir
                adicionar(fila);
                break;
            case 2: // remover
                retirar(fila);
                break;
        }

    } while (opcao != 9);

    return 0;
}