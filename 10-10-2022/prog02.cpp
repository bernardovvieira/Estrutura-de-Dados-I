#include <iostream>

using namespace std;

int main() {
    int a = 5;
    int *p = &a;
    int **pp = &p;

    cout << **pp << endl;

    return 0;
}