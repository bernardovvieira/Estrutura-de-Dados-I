#include <iostream>

using namespace std;

void foo() {
    double *p;
    p = new double;
    *p = 3.1415;
    cout << *p << endl;
    delete p;
}

int main() {
    foo();
    foo();

    return 0;   
}