#include<bits/stdc++.h>
using namespace std ;
int main()
{
    int t ,counter=0;
    cin>>t;
    while(t--)
    {
        int number,size;
        cin>>number>>size;
        if(number<size&&(size-number)>1)
        counter++;
    }
    cout<<counter<<endl;
    return 0;
}