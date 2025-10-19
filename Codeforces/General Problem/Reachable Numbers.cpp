#include<bits/stdc++.h>
using namespace std;
int main(){
    int n; cin>>n;
    set<int>numbers;
    while(numbers.find(n)==numbers.end()){
        numbers.insert(n);
        n++;
        while(n%10==0){
            n/=10;
        }
    }
    cout<<numbers.size()<<endl;
    return 0;
}