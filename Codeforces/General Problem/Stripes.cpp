#include<iostream>
using namespace std;
int main(){
	int test; cin>>test;
	while(test--){
		char arr[8][8];
		for(int i=0;i<8;i++){
			for(int j=0;j<8;j++)
			cin>>arr[i][j];
			}
			bool flag=0;
			for(int i=0;i<8;i++){
				int row=0;
			for(int j=0;j<8;j++){
				if(arr[i][j]=='R')
				row++;
			}
			if(row==8)
			flag=1;
			}
			cout<<((flag)?"R":"B")<<endl;
		}
	return 0;
	}