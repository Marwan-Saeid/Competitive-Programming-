#include<iostream>
#include<algorithm>
#include<vector>
using namespace std ;
bool can(int arr[],int mid,int k,int s){
	int counter=1,temp=arr[0];
	for(int i=1;i<s;i++){
		if(arr[i]-temp>=mid){
			counter++;
			temp=arr[i];
			}
		}
		return counter>=k;
	}
int main(){
	int test; cin>>test;
	while(test--){
		int n,k; cin>>n>>k;
		int arr[n],ve[n];
		for(int i=0;i<n;i++) cin>>arr[i];
		sort(arr,arr+n);
		long long l=0,r=arr[n-1]-arr[0],ans=0;
		while(l<=r){
			int mid=(l+r)/2;
			if(can(arr,mid,k,n)){
				ans=mid;
				l=mid+1;
				}
				else{
					r=mid-1;
					}
			}
			cout<<ans<<endl;
		} 
	return 0;
	}