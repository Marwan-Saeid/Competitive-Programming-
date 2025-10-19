#include<bits/stdc++.h>
using namespace std ;
int main ()
{
    int s1,s2,s3,s4,counter=0;
    cin>>s1>>s2>>s3>>s4;
    if(s1==s2)
    counter++;
    else if(s1==s3)
    counter++;
    else if(s1==s4)
    counter++;
    if(s2==s3)
    counter++;
    else if(s2==s4)
    counter++;
     if(s3==s4)
    counter++;
    cout<<counter<<endl;
}