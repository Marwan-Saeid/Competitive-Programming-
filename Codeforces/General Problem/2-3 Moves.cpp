#include<bits/stdc++.h>
using namespace std;
int main()
{
	
        int n;
		cin>>n;
		while(n--){
			int a;
			cin>>a;
			if(a==1){
				cout<<2<<endl;
			}
			else if(a%3!=0){
				cout<<(a/3)+1<<endl;
			}
			else{
				cout<<a/3<<endl;
			}
			
}
return 0;
}
 