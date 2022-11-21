#include <iostream>
#include <list>

using namespace std;

int main() {
    list<string> lista_1;
    list<string> lista_2;

    string a;
    string palavra_a;
    getline(cin, a);
    for (char c : a) {
        if (c == ' ') {
            lista_1.push_back(palavra_a);
            palavra_a = "";
        } else {
            palavra_a += c;
        }
    }

    string b;
    string palavra_b;
    getline(cin, b);
    for (char c : b) {
        if (c == ' ') {
            lista_2.push_back(palavra_b);
            palavra_b = "";
        } else {
            palavra_b += c;
        }
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

    for (auto n: lista_1) {
        cout << n << " ";
    }   
    cout << endl;

    return 0;
}