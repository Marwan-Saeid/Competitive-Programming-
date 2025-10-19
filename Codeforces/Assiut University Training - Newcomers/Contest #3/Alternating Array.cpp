#include<iostream>
using namespace std;
int main(){
	int N; cin>>N;
	int array[N];
	for(int i=0;i<N;i++)
	cin>>array[i];
	int positive=0,negative=0; 
	for(int i=0;i<N;i++){
		if(i%2==0){
			if(array[i]>0)negative++;
			else positive ++;
			}
			else{
				if(array[i]>0)positive++;
			else negative++;
			}
		}
cout<<((positive>negative)?negative :positive)<<endl;
	return 0;
	}