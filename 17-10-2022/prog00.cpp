#include <iostream>

using namespace std;


void bar() {
    float n = 1.5;
    cout << n * 2 << endl;
}

void foo() {
    int n = 0;
    n++;
    cout << n << endl;
    bar();
}

int main() {

    bool n = true;
    foo();

    return 0;
}