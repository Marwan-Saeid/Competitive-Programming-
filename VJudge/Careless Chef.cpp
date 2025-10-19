#include<iostream>
using namespace std ;
int main(){
	int test; cin>>test;
	while(test--){
		int n,e=0,o=0; cin>>n;
		for(int i=0;i<n*2;i++){
			int x; cin>>x;
			if(x%2==0)
			e++;
			else
			o++;
			}
			if(e%2==0 && o%2==0)
			cout<<"YES"<<endl;
			else
			cout<<"NO"<<endl;
		} 
	return 0;
	}