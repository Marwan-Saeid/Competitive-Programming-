#include<bits/stdc++.h>
using namespace std;
      map<char,pair<int,map<string ,int >>> f,s;
int main(){
    int test;cin>>test;
    while(test--){
        int size; cin>>size;
        for(char i='a';i<='z';i++){
            for(char j='a';j<='z';j++){
                string q="",p=""; q+=i; q+=j; p+=j; p+=i;
                f[i].first=0;
                s[i].first=0;
                f[i].second[q]=0;
                s[i].second[p]=0;
            }
        }
        for(int i=0;i<size;i++){
       string st; cin>>st;
       f[st[0]].first++;
       f[st[0]].second[st]++;
       s[st[1]].first++;
       s[st[1]].second[st]++;
        }
        long long  result=0;
        for(char i='a';i<='z';i++){
            for(char j='a';j<='z';j++){
                string q="",p=""; q+=i; q+=j; p+=j; p+=i;
                int a=f[i].second[q];
                if(a){
                    int w=a;
                    while(w--){
                int x=f[i].first-a;
                result+=x;
                    }
                // cout<< i<< " "<<f[i].first<<" "<<q<<" "<<f[i].second[q]<<" "<<a<<" "<<result<<endl;
                f[i].first-=a;
                }
                int b=s[i].second[p];
                if(b){
                    int w=b;
                    while(w--){
                 int y=s[i].first-b;
                 result+=y;
                    }
                //   cout<< i<< " "<<s[i].first<<" "<<p<<" "<<s[i].second[p]<<" "<<b<<" "<<result<<endl;
                 s[i].first-=b;
                }
            }
        }
        cout<<result<<endl;
    }
    return 0;
}