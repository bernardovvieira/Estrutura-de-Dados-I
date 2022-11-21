#include <iostream>
#include "funcoes.cpp"

using namespace std;

int main(){
    double a[5] = {2.2, 0.1, 6.8, 2.5, 4.0};
    auto m = menor(a, 5);

    show(a, 5);
    
    cout << "Menor: " << m << endl;
    return 0;
}