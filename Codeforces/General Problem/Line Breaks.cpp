#include<iostream>
#include<vector>
#include<string>
using namespace std ;
int main()
{
	int test ; cin>>test;
	while(test--){
	int n, m,result=0; cin>>n>>m; 
	string arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
		}
		for(int i=0;i<n;i++){
			if(arr[i].size()<=m){
			result++;
			m-=arr[i].size();
			}
			else
			break;
			}
		cout<<result<<endl;
	}
	return 0;	
}