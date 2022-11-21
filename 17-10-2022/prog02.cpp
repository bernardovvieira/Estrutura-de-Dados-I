#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;

    int *vet = new int[n];

    for (int i = 0; i < n; i++) {
        vet[i] = i * i;
        cout << vet[i] << endl;
    }

    delete[] vet;

    return 0;
}
