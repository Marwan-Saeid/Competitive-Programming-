#include<iostream>
#include<algorithm>
using namespace std ;
int main(){
	int test; cin>>test;
	while(test--){
		int n,q; cin>>n>>q;
		int arr[n];
		long long a[n]={};
		for(int i=0;i<n;i++) {
		cin>>arr[i];
		a[i]=arr[i];
		}
		
		for(int i=1;i<n;i++){
			if(arr[i]<arr[i-1])
			arr[i]=arr[i-1];
			}
			
		for(int i=1;i<n;i++)
		a[i]+=a[i-1];
		
		while(q--){
		int x;cin>>x;
			int l=0,r=n-1,ans=-1;
			while(l<=r){
				int mid=(l+r)/2;
				if(arr[mid] <=x){
					ans=mid;
					l=mid+1;
					}
					else
					r=mid-1;
				}
				cout<<((ans==-1)? 0: a[ans])<<" ";
			}
			cout<<endl;
		}
	return 0;
	}	