#include<iostream>
using namespace std;

int main() {
    int test ; cin>>test;
    while(test--){
    int n ,m ,k; cin>>n>>m>>k;
    int count=1;
    int arr[n][m];
    for(int i=0;i<n;i++){
    	for(int j=0;j<m;j++){
    		if(count%(k+1)==0)
    		count=1;
    		if(i!=0&&count==arr[i-1][j])
    		count++;
    		if(count%(k+1)==0)
    		count=1;
    		arr[i][j]=count;
    		count++;
    		}
    	}
    	for(int i=0;i<n;i++){
    		for(int j=0;j<m;j++)
    		cout<<arr[i][j]<< " ";
    		cout<<endl;
    		}
    }
}
