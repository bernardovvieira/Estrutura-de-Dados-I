#include <iostream>
#include <vector>

using namespace std;

struct aluno {
    int matricula;
    string nome;
    float nota;
};

int main() {
    vector<aluno> turma = {
        {908070, "Fulano", 7.7},
        {995511, "Beltrano", 8.9},
        {880055, "Cicrano", 9.2}
    };

    for(auto a: turma) {
        cout << a.matricula << "\t" << a.nome << "\t" << a.nota << endl;
    }

    return 0;
}