#include<iostream>
#include<vector>
using namespace std ;
int main()
{
	int test ; cin>>test;
	while(test--){
	int n; cin>>n;
	int arr[n];  long long sum=0;
	for(int i=0;i<n;i++){
		cin>>arr[i];
		sum+=arr[i];
		}
		
		long long sum_A=sum/2;
		long long sum_B=sum_A;
		
		vector<long long >v1,v2;
		for(int i=0;i<n;i++){
			if(arr[i]<=sum_A){
				v1.push_back(arr[i]);
				sum_A-=arr[i];
				}
				else
				break;
			}
			
			for(int i=n-1;i>=0;i--){
			if(arr[i]<=sum_B){
				v2.push_back(arr[i]);
				sum_B-=arr[i];
				}
				else
				break;
			}
				for(int i=1;i<v1.size();i++)
				v1[i]+=v1[i-1];
				
				for(int i=1;i<v2.size();i++)
				v2[i]+=v2[i-1];
				
				if(!v1.size() || !v2.size()){
					cout<<0<<endl;
					continue ;
					}
				int result=0,f=v1.size()-1,s=v2.size()-1;
				bool flag=false;
				while(f>=0&& s>=0){
					if(v1[f]>v2[s])
					f--;
					else if(v1[f]<v2[s])
					s--;
					else{
						flag=true;
						result=f+s+2;
						break;
						}
					}
					
					if(flag)
					cout<<result<<endl;
					else
					cout<<0<<endl;
			
		}
	return 0;	
	}