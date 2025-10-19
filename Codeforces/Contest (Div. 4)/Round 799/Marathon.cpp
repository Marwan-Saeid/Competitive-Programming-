#include<iostream>
using namespace std ;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
	int a,b,c,d,counter=0;
	cin>>a>>b>>c>>d;
	if(b>=a)
	counter++;
	if(c>=a)
	counter++;
	if(d>=a)
	counter++;
	cout<<counter<<endl;
		}
	}