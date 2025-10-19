#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
using namespace std ;
int main()
{
	int test ; cin>>test;
	while(test--){
		int n, m;cin>>n>>m;
		char arr[n][m];
		for(int i =0;i<n;i++){
			for(int j=0;j<m;j++)
			cin>>arr[i][j];
			}
			for(int i=n-2;i>=0;i--){
				for(int j=0;j<m;j++){
					if(arr[i][j]=='*'){
						int k=i;
						while(k<n-1){
							if(arr[k+1][j]=='*'||arr[k+1][j]=='o'){
								break;
								}
								else
								swap(arr[k][j],arr[k+1][j]);
								k++;
							}
						}
					}
				}
				for(int i=0;i<n;i++){
					for(int j=0;j<m;j++)
					cout<<arr[i][j];
					cout<<endl;
					}
					cout<<endl;
		}
	return 0;	
}