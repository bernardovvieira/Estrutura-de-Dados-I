#include <iostream>

using namespace std;

int main()
{
    const int tam_vet = 5;
    int vet[tam_vet];
    
    cout << "Informe " << tam_vet << " valores: " << endl;
    for (int i = 0; i < tam_vet; i++)
    {
        cin >> vet[i];
    }

    cout << "Vetor reverso\n";

    for (int i = tam_vet - 1; i >= 0; i--)
    {
        cout << "vet[" << i << "] = "<< vet[i] << endl;
    }

    return 0;
}