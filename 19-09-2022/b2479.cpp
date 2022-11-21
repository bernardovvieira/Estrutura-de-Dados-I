#include <iostream>

using namespace std;

int main()
{
    int n;

    cin >> n;

    string str1[n];
    string str;
    char c;
    int I=0,J=0;
    int count=0;

    for(int i=0;i<n;i++)
    {
        cin>>c>>str;

        if(c=='+')
            I++;
        else
            J++;
            str1[count++]=str;
    }

    for(int i=0;i<count-1;i++)
    {
        int ptr=0;
        while(ptr<count-i-1)
        {
            if(str1[ptr]>str1[ptr+1])
            {
                swap(str1[ptr],str1[ptr+1]);
            }
            ptr++;
        }
    }

    for(int i=0;i<count;i++)
        cout<<str1[i]<<endl;

    cout << "Se comportaram: " << I << " | Nao se comportaram: " << J << endl;

    return 0;
}