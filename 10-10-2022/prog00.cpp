#include <iostream>

using namespace std;

int main() {
    int n = 10, m = 0;
    int *p; // p é um ponteiro para int

    p = &n; // p recebe o endereço de n
    cout << p << endl; // mostra o endereço de n
    cout << *p << endl; // *p é o valor apontado por p

    p = &m; // p recebe o endereço de m
    cout << *p << endl; // o valor de m é 0

    *p = 999; // o valor de m é 999
    cout << m << endl; // o valor de m é 999

    return 0;
}