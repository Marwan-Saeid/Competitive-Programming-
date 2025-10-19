#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int A, B; cin>>A>>B;
    bool exist_luncknumber=0;
    for(int i=A;i<=B;i++){
        int temp=i;
        bool flag=1;
        while(temp){
            if(temp%10!=4 && temp%10!=7){
                flag=0;
                break;
            }
            temp/=10;
        }
        if(flag){
            cout<<i<<" ";
            exist_luncknumber=1;
        }
    }
    if(!exist_luncknumber)
        cout<<-1<<endl;
	return 0;
}