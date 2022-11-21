#include <iostream>

using namespace std;

int main() {
    int a = 5, *p = &a;

    cout << a << " " << *p << endl;
    *p *= 2;
    cout << a << " " << *p << endl;

    return 0;
}