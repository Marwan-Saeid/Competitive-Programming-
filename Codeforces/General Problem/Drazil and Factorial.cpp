#include<bits/stdc++.h>
using namespace std ;
int main(){
    int n; cin>>n; string s[]={"","","2","3","322","5","53","7","7222","7332"}; string re="",c;cin>>c;
    for(int i=0;i<c.size();i++){
            short w=c[i]-'0';
                re+=s[w];
    }
    sort(re.begin(),re.end(),greater<char>());
    cout<<re<<endl;
}