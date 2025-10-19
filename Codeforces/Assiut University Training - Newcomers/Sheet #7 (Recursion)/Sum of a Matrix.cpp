#include <iostream>
#include<string>
using namespace std;
int arr1[100000],arr2[100000],n,m,counter=0;
 void f(int num ){
		if(num==n*m)return ;
		if(m==counter){
			cout<<endl;
			counter=0;}
			counter++;
			cout<<arr1[num]+arr2[num]<<" ";
			f(num+1);
		}
		int main()
	{
	    cin>>n>>m; 
		for(int i=0;i<n*m;i++)
		cin>>arr1[i];
		for(int i=0;i<n*m;i++)
		cin>>arr2[i];
		f(0);
		}