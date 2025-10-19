//#include<bits/stdc++.h>
#include<iostream>
using namespace std ;
const int ma=1e5+5;
long long  arr[ma];
bool can(  int mid , int time  ){
	return arr[mid]<time;
	}
int main(){
	int n, q; cin>>n;
	for(int i=1;i<=n;i++) cin>>arr[i];
//	sort(arr,arr+n);
	for(int i=2;i<=n;i++)
	arr[i]+=arr[i-1];
	arr[n+1]=1e9+5;
	int t; cin>>t;
	while(t--){
		cin>>q;
	int l=1,r=n,ans=0;
	while(l<=r){
		int mid=(l+r)>>1;
		if(can(mid,q)){
		ans=mid;
		l=mid+1;
			}
			else
			r=mid-1;
		}
		cout<<ans+1<<endl;
		}
	return 0;
	}