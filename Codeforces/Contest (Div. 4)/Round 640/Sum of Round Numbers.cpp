#include<bits/stdc++.h>
using namespace std ;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,counter=0,x=1;
        cin>>n;
        vector<int>v;
        while(n>0)
        {
            short m=n%10;
            if(m!=0)
            {
                m=m*x;
            v.push_back(m);    
            counter++;
            }
            x*=10;
            n/=10;
        }
        cout<<counter<<endl;
        copy(v.begin(),v.end(),ostream_iterator<int>(cout," "));
        cout<<endl;
    }
}