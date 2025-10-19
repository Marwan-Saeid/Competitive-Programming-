#include<bits/stdc++.h>
using namespace std ;
const int co=5e5+5;
int main()
{
    int t; cin>>t;
    while(t--){
        int n,max=INT_MIN;  cin>>n;
        int arr[co]={};
        bool flag=0;
        while(n--){
            int m; cin>>m;
            ++arr[m];
            if(max<m)
            max=m;
        }
        for(int i=0;i<=max;i++){
            if(arr[i]>=2)
            {
                cout<<"ne krasivo"<<endl;
                flag=1;
                break;
            }
        }
        if(!flag)
        cout<<"prekrasnyy"<<endl;
    }
}