#include <iostream>

using namespace std;

int main()
{
    int n, calc;
    cin >> n;

    calc = n;

    for (int i = 0; i < 10; i++)
    {
        cout << "N[" << i << "] " << "= " << calc << endl;
        calc = calc + calc;
    }

    return 0;
}

