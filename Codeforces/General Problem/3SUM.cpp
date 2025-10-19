#include<iostream>
using namespace std;
int main(){
	
	int test; cin>>test;
	while(test--){
		int n; cin>>n;
		int num[10]={};
		for(int i=0;i<n;i++){
			int x; cin>>x;
			num[x%10]++;
			}
			bool check=0;
			for(int i=0;i<10 && !check;i++){
			for(int j=0;j<10 && !check;j++){
				for(int k=0;k<10 && !check;k++){
					if((i+j+k)%10==3){
					int arr[10]={};
					arr[i]++;	arr[j]++;	arr[k]++;	if(num[i]>=arr[i]&&num[j]>=arr[j]&&num[k]>=arr[k])
					check=1;
					}
				}
				}	
				
				}
				if(check)
				cout<<"YES"<<endl;
				else
				cout<<"NO"<<endl;
		}
	}