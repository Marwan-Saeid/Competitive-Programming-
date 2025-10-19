#include<bits/stdc++.h>
using namespace std;

int main(){
    deque<int> v1, v11, v2, v22;
    int n; 
    cin >> n;
    int m; 
    cin >> m;
    for(int i = 0; i < m; i++){
        int k; 
        cin >> k;
        v1.push_back(k);
        v11.push_back(k);
    }
    int mm; 
    cin >> mm;
    for(int i = 0; i < mm; i++){
        int k; 
        cin >> k;
        v2.push_back(k);
        v22.push_back(k);
    }
    int moveCount = 0;
    set<string>s;
    while(!v1.empty() &&!v2.empty()){
        string ss="";
        for(int a: v1)
        ss+=to_string(a)+',';
        for(int a: v2)
        ss+=to_string(a)+',';
        if(moveCount>1000){
            cout<<-1<<endl;
            return 0;
        }
        s.insert(ss);
    int top1 = v1[0];
    int top2 = v2[0];
    v1.pop_front();
    v2.pop_front();
    if (top1 > top2) {
        v1.push_back(top2);
        v1.push_back(top1);
    } else {
        v2.push_back(top1);
        v2.push_back(top2);
    }
        
        moveCount++;
    }
    cout << moveCount << " ";
    if(v1.empty())
    cout<<2<<endl;
    else
    cout<<1<<endl;
    return 0;
}