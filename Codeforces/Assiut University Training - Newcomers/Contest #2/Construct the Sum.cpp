#include<iostream>
using namespace std ;
int main(){
	int test; cin>>test;
	while(test--){
		long long n,s; cin>>n>>s;
		long long sum=n*(n+1)/2;
		if(sum<s)
		cout<<-1;
		else{
			for(int i=n;i>0;i--){
				bool flag=1;
				s-=i;
				if(s<0)
				s+=i;
				else
				cout<<i<<" ";
				if(!s)
				break;
				}
			}
			cout<<endl;
		}
	return 0;
	}