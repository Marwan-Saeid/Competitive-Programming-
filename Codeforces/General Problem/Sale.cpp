#include<bits/stdc++.h>
using namespace std ;
int main()
{
	int size, number,price=0;
	cin>>size>>number ;
	int arr[size];
	for(int i=0;i<size;i++)
	cin>>arr[i];
	sort(arr,arr+size);
	for(int i=0;i<number;i++)
	{
		if(arr[i]<0)
		price+=-arr[i];
		}
		cout<<price<<endl;
	}