#include <iostream>

using namespace std;

struct pessoa {
    string nome;
    float peso;
};

int main() {
    pessoa eu = {"Fulano", 66.6};
    
    pessoa *p;
    p = &eu;
    
    cout << p->nome << endl;

    return 0;
}