#include<bits/stdc++.h>

using namespace std  ;

int main(){
    string str1 ,str2 ;
    cin >>str1>>str2 ;
    (str1!=str2)? cout<<max(str1.size(),str2.size())<<endl:cout<<-1<<endl ;
    return 0 ;
}