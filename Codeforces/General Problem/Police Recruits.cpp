	#include<iostream>
using namespace std ;
int main(){
	int n; cin>>n;
	int crime=0,police=0;
	for(int i=0;i<n;i++){
		int m;cin>>m;
		if(-1==m&&!police)
		crime++;
		else if (m>0)
		police +=m;
		else 
		police --;
		}
		cout<<crime<<endl;
	}	