#include<bits/stdc++.h>
using namespace std ;
int main ()
{
    int n ;
    cin >> n;
    string s;
    char arr[n];
    for(int i=0 ;i< n ;i++)
    {
        cin >>arr[i];
        s+=arr[i];
    }
    int score=0; 
    for(int i=0 ;i<s.size() ;i++) 
    {
        if(s[i]=='V')
        score+=5;
        else if(s[i]=='W')
        score+=2;
        else if(s[i]=='Y')
        {
        s.push_back(s[i+1]);
        i++;
        }
        else if(s[i]=='X')
        i++;
        else if(s[i]=='Z')
        {
            if(s[i+1]=='W')
            score/=2;
            else if(s[i+1]=='V')
            score/=5;
            if(i!=s.size()-1){
            if(s[i+1]=='V'||s[i+1]=='W')
            i++;
            }
        }
        
    }
    cout<<score<<endl;
    return 0;
}