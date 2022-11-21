#include <iostream>
#include <utility>

using namespace std;

int main(){
    int a, b;
    cout << "Digite dois valores: ";
    cin >> a >> b;
    swap(a, b);
    cout << a << " " << b << endl;
    return 0;
}