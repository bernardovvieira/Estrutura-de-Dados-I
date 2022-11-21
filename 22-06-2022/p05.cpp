#include <iostream>
#include <vector>

using namespace std;

int main() {
    int vet[10];

    vector<string> nomes;

    cout << "Tamanho: " << nomes.size() << endl;

    nomes.push_back("Passo Fundo");
    nomes.push_back("Carazinho");
    nomes.push_back("Soledade");
    nomes.push_back("Lagoa Vermelha");

    cout << "Tamanho: " << nomes.size() << endl;

    for (int i = 0; i < nomes.size(); i++) {
        cout << i << "=" << nomes[i] << endl;
    }
    
    cout << "Range for\n";
    for (auto s : nomes) {
        cout << s << endl;
    }

    return 0;
}