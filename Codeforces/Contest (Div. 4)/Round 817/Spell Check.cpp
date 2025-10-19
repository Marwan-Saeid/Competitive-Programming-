#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int test ;
    cin>>test;
    string check="Timru";
    while(test--){
      int n ;cin>>n;
      string word; cin>>word;
      sort(word.begin(),word.end());
      cout<<((word==check)?"YES":"NO")<<endl;
    }
    return 0;
}