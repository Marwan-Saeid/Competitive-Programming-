#include<bits/stdc++.h>

using namespace std ;

 
 int test ;
 
 
int main(){

       cin>>test; 
       int arr[200]={};
       arr['1']=0,arr['2']=1,arr['3']=2, arr['4']=3,arr['5']=4,arr['6']=5, arr['7']=6,arr['8']=7,arr['9']=8,arr['0']=9;
    while(test--){
        string s="1",c; 
        cin>>c;  s+=c;
        int counter=0,size=s.size();
        for(int i=0;i<size-1;i++){
            counter+=abs(arr[s[i]]-arr[s[i+1]])+1;
        }
        cout<<counter<<endl;
}
}