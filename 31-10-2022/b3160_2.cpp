#include <iostream>
#include <sstream>
#include <vector>
#include <list>

using namespace std;

int main() {
    list<string> lista_1;
    list<string> lista_2;

    string a;
    getline(cin, a);

    istringstream iss(a);
    while(getline(iss, a, ' ')) {
        lista_1.push_back(a);
    }

    string b;
    getline(cin, b);

    istringstream iss_2(b);
    while(getline(iss_2, b, ' ')) {
        lista_2.push_back(b);
    }

    string c;
    getline(cin, c);

    if (c != "nao") {
        for (auto it = lista_1.begin(); it != lista_1.end(); it++) {
            if (*it == c) {
                lista_1.insert(it, lista_2.begin(), lista_2.end());
            }
        }

    } else {
        lista_1.splice(lista_1.end(), lista_2);
    }

    vector<string> vetor_1;
    for(string const &x : lista_1) {
        vetor_1.push_back(x);
    }

    cout << vetor_1.front();
    for(int i = 1; i < vetor_1.size(); i++) {
        cout << " " << vetor_1[i];
    }   
    cout << endl;
    return 0;
}