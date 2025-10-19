#include<bits/stdc++.h>
using namespace std ;
int main(){
	int test; cin>>test;
	while(test--){
		int n , k; cin>>n>>k;
		long long arr[n];
		for(int i=0;i<n;i++) cin>>arr[i];
		long long result=0,sum=0;
		 for(int i=0;i<n;i++){
		 	long long s=sum;
		 long long  c=2;
		 	for(int j=i;j<min(n,32+i);j++){
		 		s+=(arr[j]/c);
		 		c*=2;
		 		}
		 		result=max(result,s);
		 		sum+=arr[i]-k;
		 	}
		 	result=max(result,sum);
		 	cout<<result<<endl;
		}
	return 0;
	}