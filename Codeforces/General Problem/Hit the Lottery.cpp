#include<iostream>
using namespace std ;
int main()
{
	int n,counter=0;
	cin>>n;
	while(n>0)
	{
		if(n>=100)
		{counter++;
		n-=100;
		continue ;
			}
		if(n>=20)
		{counter++;
		n-=20;
		continue ;
			}
		if(n>=10)
		{counter++;
		n-=10;
		continue ;
			}
		if(n>=5)
		{counter++;
		n-=5;
		continue ;
			}	
		if(n>=1)
		{counter++;
		n-=1;
		continue ;
			}
		}
		cout<<counter<<endl;
	}