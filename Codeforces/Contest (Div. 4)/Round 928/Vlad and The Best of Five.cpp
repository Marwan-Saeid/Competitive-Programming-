#include<bits/stdc++.h>
using namespace std ;
int main()
{
    int n;
    cin>>n;
    while(n--)
    {
        int counter1=0,counter2=0;
        vector<char>v(4);
        for(auto it=0;it<5;it++)
        {
            cin>>v[it];
            if(v[it]=='A')
            counter1++;
            else
            counter2++;
        }
        if(counter1>counter2)
        cout<<"A"<<endl;
        else
        cout<<"B"<<endl;
    }
     return 0;
}