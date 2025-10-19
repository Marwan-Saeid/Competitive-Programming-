#include<iostream>
#include<string>
#include<cmath>
using namespace std ;
int main(){
	string s; cin>>s;
	if(s.size()==1){
		cout<<0<<endl; return 0;}
		int counter=0;
		while(true){
			int x=0;
			for(int i=0;i<s.size();i++){
				x+=s[i]-'0';
				}
				counter++;
				if(x<10)
				break;
				s=to_string (x);
			}
			cout<<counter<<endl;
	}