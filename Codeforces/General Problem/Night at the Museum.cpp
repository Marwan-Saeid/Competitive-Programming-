#include<iostream>
#include<string>
#include<cmath>
using namespace std ;
int main(){
	string s; cin>>s;
	int counter=0;char c='a';
	for(int i=0;i<s.size();i++){
		if(abs(s[i]-c)>13){
			counter+=26-abs(s[i]-c);
			c=s[i];
			}
			else
			{
				counter+=abs(s[i]-c);
				c=s[i];
				}
		}
		cout<<counter<<endl;
	}