#include <iostream>

using namespace std;

int main()
{
    const int NL = 3, NC = 3;

    int mat[NL][NC];

    cout << "Informe " << NL * NC << " valores\n";
    for (int i = 0; i < NL; i++)
    {
        for (int j = 0; j < NC; j++)
        {
            cout << "Informe o valor da posicao [" << i << "][" << j << "]: ";
            cin >> mat[i][j];
        }
    }

    //Total da linha
    for (int i = 0; i < NL; i++)
    {
        int soma = 0;
        for (int j = 0; j < NC; j++)
        {
            soma += mat[i][j];
        }
        cout << "Total da linha " << i << ": " << soma << endl;
    }

    //Total da coluna
    for (int j = 0; j < NC; j++)
    {
        int soma = 0;
        for (int i = 0; i < NL; i++)
        {
            soma += mat[i][j];
        }
        cout << "Total da coluna " << j << ": " << soma << endl;
    }
    
    return 0;
}