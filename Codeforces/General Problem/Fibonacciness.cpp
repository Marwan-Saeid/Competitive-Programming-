#include <bits/stdc++.h>
using namespace std;
#define Sonek() (ios_base::sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL));
int fabo(int a1, int a2, int a3, int a4, int a5)
{
    int counter = 0 ;
    if (a3 == a1+a2) counter++;
    if (a4 == a3+a2) counter++;
    if (a5 == a3+a4) counter++;
    return counter ;
}
int main() {
    int t ;
    cin >> t;
    while (t--)
    {
        int a1,a2,a4,a5;
        cin >> a1>>a2>>a4>>a5;
        int x = a1+a2;
        int y = a4-a2;
        int z = a5-a4;
        int result = 0;
        result = max(result , fabo(a1,a2, x , a4 ,a5));
        result = max(result , fabo(a1,a2, y , a4 ,a5));
        result = max(result , fabo(a1,a2, z , a4 ,a5));
        cout << result << endl ;
    }


    return 0;
}