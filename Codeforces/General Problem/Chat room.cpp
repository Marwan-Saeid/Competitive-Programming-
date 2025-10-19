#include<bits/stdc++.h>
using namespace std ;
int main ()
{
    string s,c="hello";
    cin>>s;
    int first=0,n=0;
    while(true)
    {
        bool check =false;
        for(int i=first;i<s.size();i++)
        {
            if(c[n]==s[i])
            {
                n++;
                first=i+1;
                check=true;
                break;
            }
        }
        if(check==false)
        {
            cout<<"NO"<<endl;
            return 0;
        }
        else
        if(n==5)
        {
        cout<<"YES"<<endl;
        return 0;
        }
    }
    return 0;
}