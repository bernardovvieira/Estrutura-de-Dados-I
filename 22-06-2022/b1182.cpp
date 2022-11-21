#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int c;
    string t;

    int mat[12][12];
    double soma;
    
    cin >> c;
    cin >> t;    
    
    for (int i = 0; i < 12; i++)
    {
        for (int j = 0; j < 12; j++)
        {
            cin >> mat[i][j];
            if(j == c)
            {
                soma += mat[i][j];
            }
        }
   }
   
   if (t == "S")
    {
        cout << fixed << setprecision(1) << soma << endl;
    } else if (t == "M") 
    {
        cout << fixed << setprecision(1) << soma / 12 << endl;
    }
    
    return 0;
}