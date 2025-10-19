#include<bits/stdc++.h>
using namespace std ;
long long Equation(int n, int m  )
{
    long long sum = 0;
  for(int i =1 ;i<=m;i++)
  {
      if(i%2==0)
      sum+=pow(n,i);
  }
  return sum ;
}
int main ()
{
  int n , m;
  cin >> n >> m;
 cout<< Equation(n,m)<<endl;
    return 0 ;
}