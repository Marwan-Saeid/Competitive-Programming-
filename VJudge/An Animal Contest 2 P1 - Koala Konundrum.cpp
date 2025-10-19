#include<bits/stdc++.h>
using namespace std;
int main(){
 int n ;cin>>n;
 string word ; cin>>word;
 int arr[26]={};
 for( char ch:word)
 arr[ch-'a']++;
 int odd=0;
 for(int i=0;i<26;i++){
   if(arr[i]%2!=0)
   odd++;
 }
 if(odd)
 cout<<odd<<endl;
 else
 cout<<1<<endl;
}