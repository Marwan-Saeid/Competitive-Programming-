#include <iostream>
using namespace std;
int main()
{
    int t;
    cin >> t ;
    while(t--)
    {
        string  s , c;
        cin >> s ;
        for (int i = 0 ; i < s.size()- 2; i++)
        {
            c+= s[i];
        }
        for (int i = 0 ; i < c.size(); i++)
        {
            cout << c[i];

        }
        cout << 'i' ;
        cout << endl ;


    }

    return 0;
}