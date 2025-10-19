#include<iostream>
#include<string>
using namespace std ;
int main(){
	int test ; cin>>test;
	while(test--){
		int n; 
		string word;
		cin>>n>>word;
		string w="";
		int arr[2]={0,0};
		bool check=1;
		for(char c:word){
			if(c!='W'){
				if(c=='B') arr[0]++;
				else arr[1]++;
				}
			else{
if((arr[0]&&!arr[1])||( !arr[0] && arr[1])){
				check=0;
				break;
				}
				arr[0]=arr[1]=0;
				}
			}
if((arr[0]  &&  !arr[1]) || ( !arr[0] && arr[1]))
				check=0;
		cout<<(check?"YES":"NO")<<endl;
		}
	return 0;
	}