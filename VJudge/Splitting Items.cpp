#include<bits/stdc++.h>
using namespace std ;
int main(){
	int test; cin>>test;
	while(test--){
		long long  n,k; cin>>n>>k;
		int arr[n];
		for(int i=0;i<n;i++) cin>>arr[i];
		sort(arr,arr+n,greater<int>());
		
		for(int i=1;i<n && k;i+=2){
		  int w=abs(arr[i-1]-arr[i]);
			if(k>=w){
				arr[i]+=w;
				k-=w;
				}
				else{
				arr[i]+=k;
				k=0;
				}
			}
		
			long long a=0,b=0;
			for(int i=0;i<n;i++){
			 // cout<<arr[i]<<" ";
				if(i%2==0)
				a+=arr[i];
				else
				b+=arr[i];
				}
				

				
				cout<<a-b<<endl;
		}
	return 0;
	}