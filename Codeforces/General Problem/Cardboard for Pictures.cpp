#include<iostream>
using namespace std ;
int main(){
	int test; cin>>test;
	while(test--){
		long long n,c; cin>>n>>c;
		int arr[n];
		for(int i=0;i<n;i++) cin>>arr[i];
		long long l=1,r=1e9,ans=0;
		while(l<=r){
			long long mid=(l+r)/2;
			long long can=0;
			for(int i=0;i<n;i++){
				long long temp=arr[i]+mid*2;
				can+=(temp*temp);
				if(can>c)
				break;
				}
				if(can<=c)
				{
					ans=mid;
					l=mid+1;
					}
					else
					r=mid-1;
			}
			cout<<ans<<endl;
		}
		return  0; 	
	}