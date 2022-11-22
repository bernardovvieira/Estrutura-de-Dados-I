#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

struct aluno {
    string nome;
    string regiao;
    int dist;
};

bool comparar(const aluno &a, const aluno &b) {
    return a.dist < b.dist 
    || (a.dist == b.dist && a.regiao < b.regiao)
    || (a.dist == b.dist && a.regiao == b.regiao && a.nome < b.nome);
}

int main() {
    
    int q;
    aluno aux;
    vector<aluno> alunos;

    while (cin >> q) {
        while (q--) {
            cin >> aux.nome >> aux.regiao >> aux.dist;
            alunos.push_back(aux);
        }
        sort(alunos.begin(), alunos.end(), comparar);
        for (auto a : alunos) {
            cout << a.nome << endl;
        }
        alunos.clear();
    }
    return 0;
}