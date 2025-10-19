#include<bits/stdc++.h>
using namespace std ;
int main ()
{
int t ;
cin >> t ;
while(t--)
{
    int n,k=0,count=0 ;
	cin >> n;
	int arr[n];
	for(int i=0;i<n;i++)
      cin>>arr[i];
		line :
		if(count==n) {
	
		return 0;
		count++; }
		for(int i=0+k;i<n;i++)
		{
			
			int max=INT_MIN;
			for(int j=k;j<=i;j++)
			{
			
			if(max<arr[j])
			max=arr[j];
	
				}
			cout<<max<<" ";
				if(i==n-1){
					k++;
				goto line ;
				}
			}
				cout<<endl; 
}
	return 0;
	}