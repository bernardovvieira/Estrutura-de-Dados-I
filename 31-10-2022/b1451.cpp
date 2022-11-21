#include <iostream>
#include <list>

using namespace std;

int main() {
    list<char> teclas;
    string aux;

    while (getline(cin, aux)) {
        auto it = teclas.end();

        for (char s : aux) {
            if (s == '[') {
                it = teclas.begin();
            } else if (s == ']') {
                it = teclas.end();
            } else {
                teclas.insert(it, s);
            }
        }

        for (auto c : teclas) {
            cout << c;
        }

        teclas.clear();
        cout << endl;
    }
    return 0;
}