#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--){
        long long N, sum = 0;
        cin >> N;
        long long  A[N];
        for (int i = 0; i < N;++i){
            cin >> A[i];
            sum += A[i];
        }
        long long  X = sqrt(sum);
        if (X * X == sum){
            cout << "YES" << endl;
        }
        else
            cout << "NO" << endl;
    }
    return 0;
}