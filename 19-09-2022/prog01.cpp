#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

bool compara(int a, int b) {
    return a > b;
}

int main() {
    vector<int> vet = {10, 2, 444, -5, 77, 9};
    vet.push_back(0);

    sort(vet.begin(), vet.end(), compara);

    for(auto n: vet) {
        cout << n << endl;
    }
    return 0;
}