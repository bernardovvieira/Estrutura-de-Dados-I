#include <iostream>

using namespace std;

int main()
{
    //conversor hexadecimal pra binário
    int n;
    cin >> n;
    int binario[32];
    int i = 0;
    while(n > 0)
    {
        binario[i] = n % 2;
        n = n / 2;
        i++;
    }
    for(int j = i - 1; j >= 0; j--)
    {
        cout << binario[j];
    }
    cout << endl;
    
    return 0;
}