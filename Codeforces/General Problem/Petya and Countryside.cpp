#include<iostream>
#include<vector>
using namespace std ;
int main(){
	int n ; cin>>n; int arr[n];
	vector<int>v;
	for(int i=0;i<n;i++)
	cin>>arr[i];
	bool right =1,lift=1;
	for(int i=0;i<n;i++){
	int num=0,check=arr[i];
	if(i==0) lift=0;
	else if(i==n-1)right =0;
	if(right){
		for(int j=i;j<n;j++){
			if(arr[j]<=check){
				num++;  check=arr[j];
				}
				else 
				break;
			}
		}
		check=arr[i];
		if(lift){
			 if(right){
			for(int j=i-1;j>=0;j--){
				if(arr[j]<=check){
					num++; check=arr[j];
					}
					else
					 break;
				}}
				if(!right){
					for(int j=i;j>=0;j--){
				if(arr[j]<=check){
					num++; check=arr[j];
					}
					else
					 break;
				}
					}
			}
			v.push_back(num);
			right=1,lift=1;
	}
	int m=0;
	for(int i=0;i<v.size();i++){
	//	cout<<v[i]<<" ";
		if(v[i]>m)
		m=v[i];
		}
		cout<<m<<endl;
	}