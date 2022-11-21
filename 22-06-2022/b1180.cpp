#include <iostream>

using namespace std;

int main()
{   
    int n, menor, pos;
    
    cin >> n;
    
    int vet[n];

    for (int i = 0; i < n; i++)
    {
        cin >> vet[i];
    }

    menor = vet[0];
    for (int j = 0; j < n; j++){
        if (vet[j] < menor) 
        {
            menor = vet[j];
            pos = j;
        }
    }

    cout << "Menor valor: " << menor << endl;
    cout << "Posicao: " << pos << endl;
    
    return 0;
}