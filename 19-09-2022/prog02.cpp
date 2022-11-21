#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

bool compara(const string &a, const string &b) {
    return a.size() > b.size();
}

int main() {
    vector<string> vet;

    cout << "Digite linhas de texto\n"
         << "Somente ENTER para finalizar.\n";

    string s;

    while(true) {
        getline(cin, s);
        if(s == "") {
            break;
        }
        vet.push_back(s);
    }

    sort(vet.begin(), vet.end());

    for(auto n: vet) {
        cout << n << endl;
    }
    return 0;
}