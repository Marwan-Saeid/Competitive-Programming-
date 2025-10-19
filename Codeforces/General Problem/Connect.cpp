#include<bits/stdc++.h>
using namespace std ;
int main(){
	int n; cin>>n;
	int r1,c1,r2,c2; 
	cin>>r1>>c1>>r2>>c2;
	char arr[n][n];
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++)
		cin>>arr[i][j];
		}
		
		stack<pair<int,int>>st;
		set<pair<int,int>>sett;
		r1--;c1--; r2--; c2--;
		st.push({r1,c1});
		sett.insert({r1,c1});
		
		
		while(!st.empty()){
			pair<int,int>k=st.top();
			int x=k.first,y=k.second;
			st.pop();
			
			if(x+1<n  && sett.count({x+1,y})==0 && arr[x+1][y]=='0'){
				st.push({x+1,y});
				sett.insert({x+1,y});
				}
				
			if(x-1>=0  && sett.count({x-1,y})==0 && arr[x-1][y]=='0'){
				st.push({x-1,y});
				sett.insert({x-1,y});
				}
				
			if(y+1<n  && sett.count({x,y+1})==0 && arr[x][y+1]=='0'){
				st.push({x,y+1});
				sett.insert({x,y+1});
				}
				
			if(y-1>=0  && sett.count({x,y-1})==0 && arr[x][y-1]=='0'){
				st.push({x,y-1});
				sett.insert({x,y-1});
				}  
				
			}
		/*	for(pair<int,int >ss:sett)
			cout<<ss.first<<"   "<<ss.second<<endl;
			
			cout<<"___"<<endl; */
		stack<pair<int,int>>s;
		set<pair<int,int>>se;
		s.push({r2,c2});
		se.insert({r2,c2});
		while(!s.empty()){
			pair<int,int>k=s.top();
			int x=k.first,y=k.second;
			s.pop();
			
			if(x+1<n  && se.count({x+1,y})==0 && arr[x+1][y]=='0'){
				s.push({x+1,y});
				se.insert({x+1,y});
				}
				
			if(x-1>=0  && se.count({x-1,y})==0 && arr[x-1][y]=='0'){
				s.push({x-1,y});
				se.insert({x-1,y});
				}
				
			if(y+1<n  && se.count({x,y+1})==0 && arr[x][y+1]=='0'){
				s.push({x,y+1});
				se.insert({x,y+1});
				}
				
			if(y-1>=0  && se.count({x,y-1})==0 && arr[x][y-1]=='0'){
				s.push({x,y-1});
				se.insert({x,y-1});
				}  
			} 
	/*		for(pair<int,int >ss:se)
			cout<<ss.first<<"   "<<ss.second<<endl;
			cout<<"______"<<endl; */
			int result=INT_MAX;
			for(pair<int,int> a: sett){
			  for(pair<int,int>b:se){
			    int temp1=(a.first-b.first)*(a.first-b.first);
			    int temp2=(a.second-b.second)*(a.second-b.second);
			    result=min(result, temp1+temp2);
			  }
			}
			cout<<result<<endl;
	return 0;
	}