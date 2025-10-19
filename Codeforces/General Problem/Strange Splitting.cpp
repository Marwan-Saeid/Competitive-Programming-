#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t ; cin >> t ;
    while (t--)
    {
    int n ;
    cin >> n ;
    vector <int> v(n);
    for(int i = 0 ; i < n ; i++)
    {
        cin >> v[i];

    }
    set<int> s(v.begin(), v.end());
    if (s.size() < 2) {cout << "NO" << endl; continue;}
    cout << "YES" << endl;
    int z = 1 ;
    for (int i = 0 ; i < n ; i++)
    {
        if (i == z){cout << "B" ;}
        else cout << "R";
    }
    cout << endl;

    }

    return 0;
}