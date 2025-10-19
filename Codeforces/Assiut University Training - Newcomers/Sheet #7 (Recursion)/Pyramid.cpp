#include <iostream>
using namespace std;
int arr[1000];
void f(int num,int in){
		if(num<0) return ;
		f(num-2,in+1);
		for(int i=0;i<in;i++)
		cout<<" ";
		for(int i=0;i<num;i++)
		cout<<"*";
		cout<<endl;
		}
		int main()
		{
			int n;
			cin >> n;
			f(n*2-1,0);
		}