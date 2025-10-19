#include<iostream>
#include<deque>
#include<vector>
using namespace std ;
int main(){
	int n; 
	while(cin>>n  && n ){
		deque<int> de(n);
		vector<int>v;
		for(int i=0;i<n;i++)
		de[i]=i+1; 
		cout<<"Discarded cards:";
		if(n>1) cout<<" ";
		bool flag=1;
		while(de.size()>1){
			if(!flag) cout<<", ";
			flag=0;
			cout<<de.front();
			de.pop_front();
			de.push_back(de.front());
			de.pop_front();
			}
			cout<<endl;
			cout<<"Remaining card: "<<de.front()<<endl;
		}
	return 0;
	}
	/*
	  6
	 
	 1 3 5 7 5 2
	 
	
	*/