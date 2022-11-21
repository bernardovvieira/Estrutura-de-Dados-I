#include <iostream>

using namespace std;

int main()
{
    int n;

    cin >> n;

    int rpm[n];

    for (int i = 0; i < n; i++)
    {
        cin >> rpm[i];
    }

    int queda = 0;

    for (int i = 1; i < n; i++)
    {
        if (rpm[i] < rpm[i - 1])
        {
            queda = i + 1;
            break;
        }
    }
    cout << queda << endl;
        
    return 0;
}