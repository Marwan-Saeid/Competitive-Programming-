#include <bits/stdc++.h>
using namespace std;
int const N = 200;
int const M = 1e6 + 5;
int arr[N];
// map<pair<int,int>,long long> dp ;

vector<vector<long long >>dp(25,vector<long long>(M));
long long solve(int index, int target) {
    if (index == -1 || target < 0) return 1e9;

    if (target == 0) return 0;

    if (dp[index][target]!=-1) return dp[index][target];

    long long leave = solve(index - 1, target);

    long long take = 1e9;
    if (arr[index] <= target)
        take = solve(index, target - arr[index]) + 1;

    return dp[index][target]=min(leave, take);
}

int main() {
    int n, x;
    cin >> n >> x;
    for (int i = 0; i < n; i++) cin >> arr[i];

    // memset(dp, -1, sizeof dp);
    for(int i=0;i<25;i++){
      for(int j=0;j<M;j++)
      dp[i][j]=-1;
    }

    long long result = solve(n - 1, x);
    if (result >= 1e9)
        cout << -1 << endl;
    else
        cout << result << endl;

    return 0;
}
