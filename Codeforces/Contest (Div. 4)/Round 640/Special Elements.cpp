#include<bits/stdc++.h>

using namespace std ;

int t , n ;

int main(){
   cin >>t;
   while(t--){
    cin >>n;  int counter=0;
    vector < int > ve(n) ,count(8005);
    for(int i=0;i<n;i++){
        cin >>ve[i] ;
        ++count[ve[i]] ;
    }
    for(int i =0;i<n;i++){
        int sum=0;
        for(int j=i;j<n;j++){
            sum+=ve[j];
            if (i == j) continue;
            if(sum <= n){
                counter+=count[sum];
                count[sum]=0;
            }
            else break;
        }
    }
      cout<<counter<<endl;
   } 
    return 0;
}
