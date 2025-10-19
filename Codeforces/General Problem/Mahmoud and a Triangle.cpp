#include<bits/stdc++.h>

using namespace std ;

const  int N =1e5+5;

int arr[N] , n ;

bool flag(int a,int b,int c){
    return (a+b)>c && (a+c)>b && (b+c)>a ;
}

int main(){
    cin>>n;
    for(int i=0;i<n;i++)
    cin>>arr[i] ;

    sort(arr,arr+n);

    for(int i=0;i<n-2;i++){
        
        for(int j=i+2;j<n;j++){
            if(flag(arr[i],arr[i+1],arr[j])==true){
                cout<<"YES"<<endl;
                return 0 ;
            }
        }
      
    }
    cout<<"NO"<<endl;
    return 0; 

}