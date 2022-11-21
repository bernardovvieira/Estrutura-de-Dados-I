#include <iostream>

using namespace std;

int main()
{
    double m[3][2] = { {1.5, 3.3}, {0.9, 4.7}, {5.3, 3.8} };

    //cout << m[1][0] << endl;
    m[2][1] *= 2;

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            //cout << "[" << i << "][" << j << "]=" << m[i][j] << endl;
            cout << m[i][j] << "\t";
        }
        cout << endl;
    }	
    
    return 0;
}