#include <iostream> 

using namespace std;

int* fibonacci(int n) {
    int *vet = new int[n];
    vet[0] = 0;

    if (n > 1) vet[1] = 1;

    for (int i = 2; i < n; i++) {
        vet[i] = vet[i-1] + vet[i-2];
    }
    return vet;
}

int main() {
    int n;

    cout << "Digite um número (N): ";    
    cin >> n;

    int *v = fibonacci(n);
    
    for (int i = 0; i < n; i++) {
        cout << " " << v[i];
    }

    cout << endl;
    delete[] v;

    return 0;
}