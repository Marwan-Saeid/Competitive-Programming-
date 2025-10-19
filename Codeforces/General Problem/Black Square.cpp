#include<iostream>
#include<string>
using namespace std ;
int main(){
	int a1,a2,a3,a4;
	string s; 
	cin>>a1>>a2>>a3>>a4>>s;
	int result=0;
	for(int i=0;i<s.size();i++){
		if(s[i]=='1')
		result+=a1;
		if(s[i]=='2')
		result+=a2;
		if(s[i]=='3')
		result+=a3;
			if(s[i]=='4')
		result+=a4;
		}
		cout<<result<<endl;
	}