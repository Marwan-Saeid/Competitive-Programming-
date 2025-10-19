#include<bits/stdc++.h>
using namespace std ;
int main(){
    int test; cin>>test;
    while(test--){
        int n; cin>>n;
        int arr[n], begin=0,end=n-1; 
        for(int i=0;i<n;i++)
        cin>>arr[i];
        int a=0,b=0,c=0,sum=0;
        bool check=1;
        while(begin<=end){
            if(check){
                int m=sum,k=0;
                bool flag=1;
                while(flag&&begin<=end){
                    if(arr[begin]>m){
                        sum=arr[begin];
                        a+=arr[begin];
                        begin++;
                        flag=check=0;
                    }
                    else{
                        a+=arr[begin];
                        m-=arr[begin];
                        k+=arr[begin];
                        begin++;
                    }
                }
                    sum+=k;
            }
            else{
              int m=sum,k=0;
                bool flag=1;
                while(flag&&begin<=end){
                    if(arr[end]>m){
                        sum=arr[end];
                        b+=arr[end];
                        end--;
                        flag=0; check=1;
                    }
                    else{
                        b+=arr[end];
                        m-=arr[end];
                        k+=arr[end];
                        end--;
                    }
                }
                    sum+=k;
            }
            c++;
            }
            cout<<c<<" "<<a<<" "<<b<<endl;
    }
}