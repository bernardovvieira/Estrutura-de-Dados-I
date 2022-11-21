#include <iostream>
#include <stack>
#include <string>

using namespace std;

int main() {
    stack<float> pilha;

    string s;

    while (true) {
        getline(cin, s);

        if (s == "") {
            break;
        }

        if (s == "+") {
            float a = pilha.top();
            pilha.pop();
            float b = pilha.top();
            pilha.pop();
            pilha.push(a + b);
        } else if (s == "-") {
            float a = pilha.top();
            pilha.pop();
            float b = pilha.top();
            pilha.pop();
            pilha.push(b - a);
        } else if (s == "*") {
            float a = pilha.top();
            pilha.pop();
            float b = pilha.top();
            pilha.pop();
            pilha.push(a * b);
        } else if (s == "/") {
            float a = pilha.top();
            pilha.pop();
            float b = pilha.top();
            pilha.pop();
            pilha.push(b / a);
        } else {
            pilha.push(stof(s));
        }
        cout << "[ " << pilha.top() << " ]\n" << endl;
    }

    return 0;
}