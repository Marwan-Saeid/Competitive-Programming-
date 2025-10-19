#include <iostream>
#include<algorithm>
using namespace std;

int main(){
int N, counter = 0;    cin >> N;
int A[N];

for (int i = 0;i < N;++i){
    int E, G, M , H;
    cin >> E >> G >> M >> H;
    int sum = E + G + M + H;
    A[i] = sum;
}
long long smith=A[0];
sort(A,A+N,greater<int>());
for (int i = 0;i < N;++i){
if (smith==A[i]){
    cout<<i+1<<endl;
    return 0;
}
}
return 0;
}
