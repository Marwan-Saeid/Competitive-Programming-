#include<iostream>
#include<algorithm>
using namespace std ;
int main(){
	int test; cin>>test;
	while(test--){
		int n; cin>>n;
		int arr[n];
		for(int i=0;i<n;i++) cin>>arr[i];
		sort(arr,arr+n);
		int max_counter=0;
		int temp =arr[0],count=0;
		for(int i=0;i<n;i++){
			if(arr[i]==temp) count++;
			else{
				temp=arr[i];
max_counter=max(max_counter,count);
				count=1;
				}
			}
max_counter=max(max_counter,count);
         cout<<n-max_counter<<endl;
		} 
	return 0;
	}