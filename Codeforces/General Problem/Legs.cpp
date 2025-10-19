#include<iostream>
using namespace std ;
bool can(  int mid ,int n){
	return mid<=n;
	}
int main(){
	int test; cin>>test;
	while(test--){
		int n ; cin>>n;
			int l=0,r=1e9,ans=0;
			while(l<=r){
				int mid=(l+r)/2;
				if(can(mid,n)){
					int x=(mid/4);
					int y=mid%4;
					x+=y/2;
					ans=x;
					l=mid+1;
					}
					else
					r=mid-1;
				}
				cout<<ans<<endl;
		}
	return 0;
	}	