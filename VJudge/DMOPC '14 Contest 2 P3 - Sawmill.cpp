#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int n ;
    cin >> n ;
    int x[n],y[n];
    for (int i = 0 ; i < n ; i++) cin >> x[i];
for (int i = 0 ; i < n ; i++) cin >> y[i];

sort(x , x+n);
sort(y,y+n,greater<int>());
long long sum =0;
for (int i = 0 ; i < n ; i++)
{
  sum+= x[i]*y[i];
}
cout << sum ;
    return 0;
}
