#include<bits/stdc++.h>
using namespace std ;
#define maro() (ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL));
int t ,n;
const int N =1e5+5;
pair<int ,int > p[N];
int main(){
    scanf("%d", &t);
    while(t--){
      scanf("%d", &n);
    for(int i=0;i<n;i++){
    scanf("%d %d", &p[i].first, &p[i].second);
    p[i].second*=-1;
    }
    sort(p, p+n);
    for(int i=0;i<n;i++)
     printf("%d %d\n", p[i].first, -1 * p[i].second);
    }

    return 0;
}