#include<bits/stdc++.h>
using namespace std ;
int main ()
{
int t ;
cin >> t ; 
while(t--)
{
    int n,k=0,m=0 , count=0;
	cin >> n; 
	int arr[n];
	for(int i=0;i<n;i++)
      cin>>arr[i]; 
		line :
		if(m==n) {
		return 0;
		m++; }
		for(int i=0+k;i<n;i++) 
		{
			
		bool check=true ;
			for(int j=k;j<=i-1;j++)
			{
			
		if(arr[j]>arr[j+1]) 
		{
		    check =false ;
		    break; 
		}
				}
	      	if(check)
	     	count++; 
				if(i==n-1){   
					k++;
				goto line ;
				}
			}
				cout<<count<<endl; 
}
	return 0;
	}