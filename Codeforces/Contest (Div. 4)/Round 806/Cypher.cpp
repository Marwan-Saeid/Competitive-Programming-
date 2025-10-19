#include<iostream>
#include<string>
using namespace std ;
int main(){
	int test; cin>>test;
	while(test--){
		int n; cin>>n; 
		int arr[n];
		for(int i =0;i<n;i++)
		cin>>arr[i];
		for(int i=0;i<n;i++){
			int x; cin>>x ;
			string s; cin>>s;
			for(char y:s){
				if(y=='U')
				arr[i]--;
				else
				arr[i]++;
				if(arr[i]<0)
				arr[i]+=10;
				arr[i]%=10;
				}
			}
			for(int i=0;i<n;i++)
			cout<<arr[i]<<" ";
			cout<<endl;
		}
	return 0;
	}